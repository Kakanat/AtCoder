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
  int N, D;
  cin >> N >> D;
  int den = 2 * D + 1;
  int ans = (N + den - 1) / den;
  cout << ans << endl;
  return 0;
}