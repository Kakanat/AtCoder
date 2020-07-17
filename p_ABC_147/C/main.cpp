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

int x[15][15];
int y[15][15];

int main() {
  int N; cin >> N;
  vector<int> A(N);
  rep(i,N) {
    cin >> A[i];
    rep(j,A[i]) {
      cin >> x[i][j] >> y[i][j];
    }
  }
  int ans = 0;
  rep(i,1<<N) { // 1 is honest, 0 is unkind.
    bool ok = true;
    int honest = 0;
    rep(j,N) {
      if (i>>j&1) { // if j is honest.
        rep(k,A[j]) {
          if (y[j][k] != (i>>(x[j][k]-1)&1)) {
            ok = false;
            break;
          }
        }
      if (ok) ++honest;
      else break;
      }
    }
    if (ok) ans = max(ans, honest);
  }
  cout << ans << endl;
  return 0;
}