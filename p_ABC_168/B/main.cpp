#include <iostream>
#include <algorithm>
#include <vector>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int K;
  string S;
  cin >> K >> S;
  if (S.size() <= K) cout << S << endl;
  else {
    rep(i,K) cout << S[i];
    cout << "..." << endl;
  }
  return 0;
}