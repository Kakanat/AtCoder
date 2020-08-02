#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  ll N, D;
  cin >> N >> D;
  vector<ll> X(N), Y(N);
  rep(i,N) cin >> X[i] >> Y[i];
  int ans = 0;
  rep(i,N) {
    if (X[i] * X[i] + Y[i] * Y[i] <= D*D) ++ans;
  }
  cout << ans << endl;
  return 0;
}