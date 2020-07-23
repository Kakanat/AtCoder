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
  vector<int> d(N);
  rep(i,N) cin >> d[i];
  sort(d.begin(), d.end());
  int ans = d[N/2] - d[N/2 - 1];
  cout << ans << endl;
  return 0;
}