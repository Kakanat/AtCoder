#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> H(N);
  vector<bool> good(N);
  rep(i,N) {
    cin >> H[i];
    good[i] = true;
  }
  rep(i,M) {
    int A, B;
    cin >> A >> B;
    if (H[A-1] > H[B-1]) good[B-1] = false;
    else if (H[A-1] < H[B-1]) good[A-1] = false;
    else {
      good[A-1] = false;
      good[B-1] = false;
    }
  }
  int ans = 0;
  rep(i,N) if (good[i]) ++ans;
  cout << ans << endl;
  return 0;
}