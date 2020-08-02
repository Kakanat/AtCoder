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
  string c;
  cin >> c;
  int ans = 0;
  int l = 0, r = N-1;
  while (true) {
    if (l > r) break;
    else if (c[l] == 'R') ++l;
    else if (c[r] == 'W') --r;
    else {
      c[l] = 'R';
      c[r] = 'W';
      ++ans;
    }
  }
  cout << ans << endl;
  return 0;
}