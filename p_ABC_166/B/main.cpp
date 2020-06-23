#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int N, K;
  cin >> N >> K;
  int d, p[100] = {0};
  rep(k,K) {
    cin >> d;
    rep(i,d) {
      int t;  
      cin >> t;
      p[t-1]++;
    }
  }
  int ans = 0;
  rep(i,N) {
    if (p[i] == 0) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}