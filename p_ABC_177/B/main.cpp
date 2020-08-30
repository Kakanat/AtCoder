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
  string N; cin >> N;
  int t = 0;
  rep(i,N.size()) {
    t += (int)(N[i] - '0');
    t %= 9;
  }
  if (t%9==0) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}