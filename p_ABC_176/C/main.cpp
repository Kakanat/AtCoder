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
  int N; cin >> N;
  ll ans = 0;
  ll temp = 0;
  rep(i,N) {
    ll person; cin >> person;
    if (person < temp) {
      ans += temp - person;
    }
    else temp = person;
  } 
  cout << ans << endl; 
  return 0;
}