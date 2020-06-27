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
  int N, M, K;
  cin >> N >> M >> K;
  vector<ll> A(N+1), B(M+1);
  rep(i,N) cin >> A[i+1];
  rep(i,M) cin >> B[i+1];
  rep(i,N) A[i+1] += A[i];
  rep(i,M) B[i+1] += B[i];
  int A_best = 0;
  rep(i,N+1) {
    if (A[i] > K) break;
    A_best = i;
  }
  int B_best = 0;
  rep(i,M+1) {
    if (A[A_best] + B[i] > K) break;
    B_best = i;
  }
  int ans = A_best + B_best;
  for (int i = A_best; i >= 0; i--) {
    for (int j = B_best; j <= M; j++) {
      if (A[i] + B[j] > K) {
        break;
      }
      B_best = j;
    }
    ans = max(ans, i + B_best);
  }
  cout << ans << endl;
  
  return 0;
}