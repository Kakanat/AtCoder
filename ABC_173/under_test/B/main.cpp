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
  int N;
  cin >> N;
  int ac = 0;
  int wa = 0;
  int tle = 0;
  int re = 0;
  rep(i,N) {
    string S;
    cin >> S;
    if (S[0] == 'A') ac++;
    if (S[0] == 'W') wa++;
    if (S[0] == 'T') tle++;
    if (S[0] == 'R') re++;
  }
  cout << "AC x " << ac << endl;
  cout << "WA x " << wa << endl;
  cout << "TLE x " << tle << endl;
  cout << "RE x " << re << endl;
  return 0;
}