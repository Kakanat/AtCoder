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
  ll N;
  cin >> N;
  vector<ll> A(N);
  rep(i,N) cin >> A[i];
  ll money = 1000, stock = 0;
  rep(i,N) {
    if (i > 0) {
      // 売却
      if (A[i] >= A[i-1]) {
        money += stock * A[i];
        stock = 0;
      }
    }
    if (i < N-1) {
      // 購入
      if (A[i] <= A[i+1]) {
        stock += money / A[i];
        money %= A[i];
      }
    }
  }
  cout << money << endl;
  return 0;
}