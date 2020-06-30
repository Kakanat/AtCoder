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
  int K, N;
  cin >> K >> N;
  vector<int> A(N);
  rep(i,N) cin >> A[i];
  int l = A[0] + K - A[N-1];
  for (int i = 1; i < N; i++) {
    l = max(A[i] - A[i-1], l);
  }
  cout << K - l << endl;
  return 0;
}