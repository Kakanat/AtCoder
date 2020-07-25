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

ll min(ll x, ll y) {
  if (x <= y) return x;
  else return y;
}

int main() {
  int N;
  cin >> N;
  vector<ll> X(N), Y(N), P(N);
  rep(i,N) cin >> X[i] >> Y[i] >> P[i]; //各集落のx座標，y座標，人口
  vector<int> row(N), col(N); //鉄道のある直線
  row[0] = 0;
  col[0] = 0;

  vector<ll> cur_d(N), cur_cost(N);
  rep(i,N) cur_d[i] = min(abs(X[i]), abs(Y[i]));
  rep(i,N) cur_cost[i] = cur_d[i] * P[i];

  

  return 0;
}