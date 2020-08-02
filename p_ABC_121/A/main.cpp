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
  int H, W, h, w;
  cin >> H >> W >> h >> w;
  int ans = (H-h) * (W-w);
  cout << ans << endl;
  return 0;
}