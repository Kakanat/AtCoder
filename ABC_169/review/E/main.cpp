#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> ls(N), rs(N);
    for (int i = 0; i < N; ++i) {
        cin >> ls[i] >> rs[i];
    }
    sort(ls.begin(), ls.end());
    sort(rs.begin(), rs.end());
    int ans = 0;
    if (N%2 == 1) {
        ans = rs[N/2] - ls[N/2] + 1;
    }
    else {
        ans = rs[N/2-1] + rs[N/2] - ls[N/2-1] - ls[N/2] + 1;
    }
    cout << ans << endl;
    return 0;
}