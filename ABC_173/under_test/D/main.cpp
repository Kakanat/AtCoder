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
  int N;
  cin >> N;
  vector<ll> A(N);
  rep(i,N) cin >> A[i];
  sort(A.begin(), A.end(), greater<ll>());
  ll ans = A[0];
  int count = 1;
  for (int i = 1; i < N; ++i) {
    if (count == N-1) break;
    ans += A[i];
    count++;
    if (count == N-1) break;
    ans += A[i];
    count++;
  }
  cout << ans << endl;
  return 0;
}