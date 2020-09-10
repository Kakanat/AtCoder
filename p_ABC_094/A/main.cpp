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
  int a, b, x; cin >> a >> b >> x;
  if (a <= x && x <= a + b) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}