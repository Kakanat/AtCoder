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
  string S;
  cin >> N >> S;
  if (N%2 == 1) {
    cout << "No" << endl;
    return 0;
  }
  else {
    rep(i,N/2) {
      if (S[i] != S[N/2+i]) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}