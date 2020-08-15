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
  ll maxValue = -1000000100;
  ll change_by_loop = 0;
  ll N, K; cin >> N >> K;
  vector<ll> P(N), C(N);
  rep(i,N) cin >> P[i];
  rep(i,N) {
    cin >> C[i];
    change_by_loop += C[i];
  }

  if (change_by_loop <= 0) {
    rep(i,N) {
      ll nextPos = P[i];
      ll temp = 0;
      rep(j,K) {
        temp += C[nextPos-1];
        nextPos = P[nextPos-1];
        maxValue = max(maxValue, temp);
      }
    }
    cout << maxValue << endl;
    return 0;
  }

  if (change_by_loop > 0) {
    ll rem = K%N;
    ll loop_time = K/N - 1;
    rep(i,N) {
      ll nextPos = P[i];
      ll temp = change_by_loop * loop_time;
      rep(j, N + rem) {
        temp += C[nextPos-1];
        nextPos = P[nextPos-1];
        maxValue = max(maxValue, temp);
      }
    }
    cout << maxValue << endl;
    return 0;
  }

  // ll max_loop = K/N

  // rep(i,N) {
  //   ll max_loop = 

  // }
  return 1;
}