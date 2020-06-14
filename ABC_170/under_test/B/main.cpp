#include <iostream>
using namespace std;

int main(void) {
    int x, y;
    cin >> x >> y;
    bool notExist = true;
    for (int i = 0; i <= x; ++i) {
        if (2 * i + 4 * (x - i) == y) {
            cout << "Yes" << endl;
            notExist = false;
            break;
        }
    }
    if (notExist) cout << "No" << endl;
    return 0;
}