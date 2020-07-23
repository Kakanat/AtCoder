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
  int n;
  cin >> n;
  vector<int> p(n);
  rep(i,n) cin >> p[i];
  int ans = 0;
  for (int i = 1; i < n-1; ++i) {
    if ((p[i-1] < p[i] && p[i] < p[i+1]) || (p[i-1] > p[i] && p[i] > p[i+1])) ++ans;
  }
  cout << ans << endl;
  return 0;
}