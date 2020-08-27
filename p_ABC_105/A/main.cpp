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
  int n, k; cin >> n >> k;
  if (n%k==0) cout << 0 << endl;
  else cout << 1 << endl;
  return 0;
}