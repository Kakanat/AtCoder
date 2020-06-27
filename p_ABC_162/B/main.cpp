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
  ll ans = 0;
  for (int i = 1; i <= N; ++i) {
    if ((i % 3 != 0) && (i % 5 != 0)) {
      ans += i;
    }
  }
  cout << ans << endl;
  return 0;
}