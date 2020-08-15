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
  int N; cin >> N;
  vector<ll> L(N);
  rep(i,N) cin >> L[i];
  sort(L.begin(), L.end());
  int ans = 0;
  for (int i = 0; i < N; ++i) {
    for (int j = i + 1; j < N; ++j) {
      for (int k = j + 1; k < N; ++k) {
        if (L[i] != L[j] && L[j] != L[k] && L[k] != L[i]) {
          if (L[i] + L[j] > L[k]) ++ans;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}