#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

const int INF = 1001001001;

int a[12][12];

int main() {
  int N, M, X;
  cin >> N >> M >> X;
  vector<int> c(N);
  rep(i,N) {
    cin >> c[i];
    rep(j,M) cin >> a[i][j];
  }

  int ans = INF;
  rep(s,1<<N) {
    int cost = 0;
    vector<int> d(M);
    rep(i,N) {
      if (s>>i&1) {
        cost += c[i];
        rep(j,M) d[j] += a[i][j];
      }
    }
    bool ok = true;
    rep(j,M) if (d[j] < X) ok = false;
    if (ok) ans = min(ans, cost);
  }
  if (ans == INF) cout << -1 << endl;
  else cout << ans << endl;
  return 0;
}