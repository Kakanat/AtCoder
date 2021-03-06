#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
#include <map>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  cin >> n;
  map<string,int> cnt;
  rep(i,n) {
    string s;
    cin >> s;
    cnt[s]++;
  }
  for (string s : {"AC", "WA", "TLE", "RE"}) {
    cout << s  << " x " << cnt[s] << endl;
  }
  return 0;
}