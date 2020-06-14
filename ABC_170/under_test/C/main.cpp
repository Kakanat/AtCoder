#include <iostream>
using namespace std;

int abs(int x) {
    if (x >= 0) return x;
    else return -x;
}

int main(void) {
    int x, n;
    int p[110];
    cin >> x >> n;
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    int ans = 0;
    for (int i = 1; i <= 105; ++i) {
        bool isExist = false;
        for (int j = 0; j < n; ++j) {
            if (p[j] == i) isExist = true;
        }
        if (isExist) continue;
        else {
            if (abs(i - x) < abs(ans - x)) {
                ans = i;
            }
        }
    }

    cout << ans << endl;

    return 0;
}