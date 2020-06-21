#include <iostream>
#include <vector>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int N, dp[100005], Q;
  ll sum = 0;
  ll ans[100005];
  cin >> N;
  rep(i,N) {
    int a;
    cin >> a;
    dp[a]++;
    sum += a;
  }
  cin >> Q;
  rep(i,Q) {
    int b, c;
    cin >> b >> c;
    int cur = dp[b];
    dp[b] = 0;
    dp[c] += cur;
    sum += (c - b) * cur;
    ans[i] = sum;
  }
  rep(i,Q) cout << ans[i] << endl;
  return 0;
}