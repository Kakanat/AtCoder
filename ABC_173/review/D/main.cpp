#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  sort(a.rbegin(), a.rend());
  ll ans = 0;
  int t = n - 1;
  rep(i,n) {
    int lim = 2;
    if (i == 0) lim = 1;
    rep(j,lim) {
      if (t > 0) {
        ans += a[i];
        t--;
      }
    }
  }
  cout << ans << endl;
  return 0;
}