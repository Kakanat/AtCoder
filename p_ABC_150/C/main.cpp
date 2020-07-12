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
  vector<int> A(N), B(N);
  rep(i,N) cin >> A[i];
  rep(i,N) cin >> B[i];
  vector<int> p(N);
  rep(i,N) p[i] = i+1;

  map<vector<int>, int> mp;
  do {
    mp[p] = mp.size();
  } while (next_permutation(p.begin(), p.end()));
  int ans = abs(mp[A] - mp[B]);
  cout << ans << endl;
  return 0;
}