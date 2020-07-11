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
  int N;
  cin >> N;
  for (int n = 1; n <= N; ++n) {
    int ans = 0;
    for (int x = 1; x <= sqrt(n/6.0) + 1; x++) {
      for (int y = x; y <= sqrt(n/3.0) + 1; y++) {
        if (2*x*x + 3*y*y + x*y > n) break;
        for (int z = y; z <= sqrt(n) + 1; z++) {
          if (x*x + y*y + z*z + x*y + y*z + z*x == n) {
            if (x == y) {
              if (y == z) ans += 1;
              else ans += 3;
            }
            else if (y == z) ans += 3;
            else ans += 6;
          }
          else if (x*x + y*y + z*z + x*y + y*z + z*x > n) break;
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}