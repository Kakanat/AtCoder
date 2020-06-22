#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <math.h>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int A, B, H, M;
  cin >> A >> B >> H >> M;
  long double rad = (M*6.0 - (H*30.0 + M*0.5)) * M_PI / 180.0;
  long double ans;
  ans = sqrt(A*A + B*B - 2*A*B*cos(rad));
  cout << fixed << setprecision(10) << ans << endl;

  return 0;
}