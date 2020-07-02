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
  int A[3][3];
  rep(i,3) rep(j,3) cin >> A[i][j];
  int N, b[10];
  cin >> N;
  rep(i,N) cin >> b[i];
  rep(k,N) {
    rep(i,3) rep(j,3) {
      if (A[i][j] == b[k]) A[i][j] = 0;
    }
  }
  bool bingo = false;
  rep(i,3) {
    if (A[i][0] + A[i][1] + A[i][2] == 0) {
      bingo = true;
      break;
    }
    if (A[0][i] + A[1][i] + A[2][i] == 0) {
      bingo = true;
      break;
    }
  }
  if (A[0][0] + A[1][1] + A[2][2] == 0) bingo = true;
  if (A[0][2] + A[1][1] + A[2][0] == 0) bingo = true;
  if (bingo) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}