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
  int N;
  cin >> N;
  vector<int> d(N);
  rep(i,N) cin >> d[i];
  int sum = 0;
  for (int i = 0; i < N - 1; ++i) {
    for (int j = i + 1; j < N;  ++j) {
      sum += d[i] * d[j];
    }
  }
  cout << sum << endl;
  return 0;
}