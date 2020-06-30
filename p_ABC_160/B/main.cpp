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
  int X;
  cin >> X;
  int ans = 0;
  while (X >= 500) {
    X -= 500;
    ans += 1000;
  }
  while (X >= 5) {
    X -= 5;
    ans += 5;
  }
  cout << ans << endl;
  return 0;
}