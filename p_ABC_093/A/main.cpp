#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  string S; cin >> S;
  if (S[0] == S[1] || S[0] == S[2] || S[1] == S[2]) cout << "No" << endl;
  else cout << "Yes" << endl;
  return 0;
}