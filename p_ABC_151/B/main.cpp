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
  int N, M, K;
  cin >> N >> K >> M;
  int sum = 0;
  rep(i,N-1) {
    int t = 0;
    cin >> t;
    sum += t;
  }
  if (M * N - sum <= K) cout << max(0, M * N - sum) << endl;
  else cout << -1 << endl;

  return 0;
}