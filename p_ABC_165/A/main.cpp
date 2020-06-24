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
  int K, A, B;
  cin >> K >> A >> B;
  int t = 0;
  while (A > K * t) {
    t++;
  }
  if (K*t <= B) cout << "OK" << endl;
  else cout << "NG" << endl;
  return 0;
}