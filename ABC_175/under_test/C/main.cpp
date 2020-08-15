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
  ll X, K, D; cin >> X >> K >> D;
  if (X < 0) X = -X;
  if (X/D >= K) cout << X - K*D << endl;
  else {
    ll temp = X%D;
    ll remain = K - X/D;
    if (remain % 2 == 0) cout << temp << endl;
    else cout << -(temp - D) << endl;
  }

  return 0;
}