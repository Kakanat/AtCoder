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
  int a;
  string s;
  cin >> a >> s;
  if (a >= 3200) cout << s << endl;
  else cout << "red" << endl;
  return 0;
}