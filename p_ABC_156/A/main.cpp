#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int N, R;
  cin >> N >> R;
  if (N >= 10) cout << R << endl;
  else cout << R + 100*(10-N) << endl;
  return 0;
}