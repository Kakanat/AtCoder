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
  string S, T;
  cin >> S >> T;
  int A, B;
  cin >> A >> B;
  string U;
  cin >> U;
  if (S == U) --A;
  if (T == U) --B;
  cout << A << " " << B << endl;
  return 0;
}