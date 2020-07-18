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

int d(int N) {
  int t = 0;
  while (N > 0) {
    N /= 10;
    ++t;
  }
  return t;
}

int main() {
  ll A, B;
  ll X;
  cin >> A >> B >> X;
  if (A + B > X) {
    cout << 0 << endl;
    return 0;
  }
  int l = 1, r = 1000000000;
  while (l < r) {
    // cout << l << r << endl;
    int t = (l+r+1)/2;
    if (A*t + B*d(t) > X) {
      r = t - 1;
    }
    else {
      l = t;
    }
    // cout << l << r << endl;
    // return 0;
  }
  cout << l << endl;
  return 0;
}