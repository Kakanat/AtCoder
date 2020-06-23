#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  ll A, B, C, K;
  cin >> A >> B >> C >> K;
  ll ans = 0;
  if (A >= K) ans = K;
  else if (A + B >= K) ans = A;
  else ans = A - (K - A - B);
  cout << ans << endl;
  return 0;
}