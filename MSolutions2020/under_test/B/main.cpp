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
  int A, B, C;
  cin >> A >> B >> C;
  int K;
  cin >> K;
  int t = 0;
  while (t < K) {
    if (B <= A) {
      B *= 2;
      ++t;
    }
    else break;
  }
  while (t < K) {
    if (C <= B) {
      C *= 2;
      ++t;
    }
    else break;
  }
  if (A < B && B < C) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}