#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int N, K;
  cin >> N >> K;
  vector<ll> A(N);
  rep(i,N) cin >> A[i];
  sort(A.begin(), A.end());
  int minuses = 0;
  for (int i = 0; i < N-K; i += 2) {
    if (A[i]*A[i+1] >= A[N-K+i]*A[N-K+i+1]) {
      minuses += 2;
    }
    else break;
  }
  cout << minuses << endl;
  ll ans = 1;
  rep(i,minuses) {
    ans *= A[i];
    ans = ans % 1000000007;
  }
  rep(i, K-minuses) {
    ans *= A[N-i];
    ans = ans % 1000000007;
  }
  cout << ans << endl;
  return 0;
}