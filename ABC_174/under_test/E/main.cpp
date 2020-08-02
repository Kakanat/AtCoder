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
  ll N, K;
  cin >> N >> K;
  vector<ll> A(N);
  ll total = 0;
  rep(i,N) {
    cin >> A[i];
    total += A[i];
  }
  sort(A.begin(), A.end());
  double ideal = total / (1.0 * (K+N)); // ideal cut length
  // cout << fixed << setprecision(3) << ideal << endl;

  if (N > K) {
    cout << A[N-K-1] << endl;
    return 0;
  }

  ll ans = 1000000010;
  // ll time = 0;
  rep(i,N){
    if (ideal * 2 <= A[i]) {
      ll t = ll(A[i] / ideal);
      cout << t << endl;
      ans = min(ans, ll(ceil(A[i] / t)) + 1);
    } 
  }
  cout << ans << endl;


  return 0;
}