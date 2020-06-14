#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a[200010] = {0};
    bool canBeDivided[200010] = {false};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    int ans = 0;
    for (int i = 0; i <= n; ++i) {
        if (canBeDivided[i] == true) {
            continue;
        }
        else {
            for (int j = i + 1; j < n; ++j) {
                if (a[j] % a[i] == 0) {
                    canBeDivided[j] = true;
                }
            }
            if (a[i] == a[i+1]) {
                canBeDivided[i] = true;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        if (canBeDivided[i] == false) ++ans;
    }

    cout << ans << endl;
    return 0;
}