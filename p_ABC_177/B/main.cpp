#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  string S, T; cin >> S >> T;
  int ans = 2000;
  rep(i, S.size() - T.size() + 1) {
    int temp = 0;
    rep(j, T.size()) {
      if (S[i+j] != T[j]) temp++;
    }
    ans = min(ans, temp);
  }
  cout << ans << endl;
  return 0;
}