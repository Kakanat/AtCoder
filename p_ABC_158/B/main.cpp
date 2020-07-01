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
  ll N, A, B;
  cin >> N >> A >> B;
  cout << N/(A+B) * A + min(N%(A+B), A) << endl;
  return 0;
}