#include <iostream>
#include <vector>
using namespace std;


int main() {
    long long N;
    cin >> N;

    vector<pair<long long, int>> fs;
    for (long long i = 2; i * i <= N; ++i) {
        int x = 0;
        while (N % i == 0) {
            N /= i;
            ++x;
        }
        fs.emplace_back(i, x);
    }
    if (N != 1) {
        fs.emplace_back(N, 1);
    }

    int ans = 0;
    for (auto p : fs) {
        int x = p.second;
        int b = 1;
        while (b <= x) {
            x -= b;
            ++b;
            ++ans;
        }
    }

    cout << ans << endl;

    return 0;
}