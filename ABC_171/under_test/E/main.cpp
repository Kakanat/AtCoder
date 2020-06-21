#include <iostream>
#include <vector>
#include<math.h>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int N, a[200005];
  int total_xor = 0;
  cin >> N;
  rep(i,N) {
    cin >> a[i];
    total_xor ^= a[i];
  }
  rep(i,N) {
    if (i == N - 1) {
      cout << (a[i]^total_xor) << endl;
      return 0;
    }
    cout << (a[i]^total_xor) << ' ';
  }
  return 1;
}