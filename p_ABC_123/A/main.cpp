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
  int a, b, c, d, e, k;
  cin >> a >> b >> c >> d >> e >> k;
  if (e - a > k) cout << ":(" << endl;
  else cout << "Yay!" << endl;
  return 0;
}