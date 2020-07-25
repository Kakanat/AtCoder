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
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  rep(i,N) cin >> A[i];
  for (int i = K; i < N; ++i) {
    if (A[i] > A[i-K]) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  return 0;
}