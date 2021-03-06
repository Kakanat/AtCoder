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
  string S, T;
  cin >> S;
  cin >> T;
  int ans = 0;
  rep(i,S.size()) {
    if (S[i] != T[i]) ans++;
  }
  cout << ans << endl;
  return 0;
}