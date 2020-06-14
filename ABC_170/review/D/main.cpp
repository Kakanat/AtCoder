#include <iostream>
#include <vector>
using namespace std;

const int M = 1000005;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<int> cnt(M);
    for (int x : a) {
        if (cnt[x] != 0) {
            cnt[x] = 2;
            continue;
        }
        for (int i = x; i < M; i += x) {
            cnt[i]++;
        }
    }
    int ans = 0;
    for (int x : a) {
        if (cnt[x] == 1) ans++;
    }
    cout << ans << endl;
    return 0;
}