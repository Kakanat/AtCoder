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
  int H, W, K;
  cin >> H >> W >> K;
  int c[6][6];
  rep(i,H) rep(j,W) {
    char color;
    cin >> color;
    if (color == '#') c[i][j] = 1;
    else c[i][j] = 0;
  }
  int ans = 0;
  rep(s,1<<(H+W)) {
    vector<bool> chosen(H+W);
    rep(i,(H+W)) {
      if (s>>i&1) chosen[i] = true;
    }
    int temp = 0;
    rep(i,H) rep(j,W) {
      if (chosen[i] || chosen[H+j]) continue;
      else if (c[i][j]) temp++;
    }
    if (temp == K) ans++;
  }
  cout << ans << endl;

  return 0;
}