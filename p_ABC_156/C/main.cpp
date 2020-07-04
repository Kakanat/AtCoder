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
  int N;
  cin >> N;
  vector<int> X(N);
  rep(i,N) cin >> X[i];
  int ans = 99999999;
  for (int i = 1; i <= 100; ++i) {
    int cost = 0;
    rep(j,N) cost += (i - X[j]) * (i - X[j]);
    ans = min(ans, cost);
  }
  cout << ans << endl;
  return 0;
}