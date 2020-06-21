#include <iostream>
#include <algorithm>
#include <vector>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int N, K, p[1005];
  cin >> N >> K;
  rep(i,N) cin >> p[i];
  sort(p, p+N);
  int ans = 0;
  rep(i,K) ans += p[i];
  cout << ans << endl;
  return 0;
}