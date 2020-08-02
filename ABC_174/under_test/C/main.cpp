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
  int K;
  cin >> K;
  int temp_num = 7;
  vector<bool> hasAppeared(K+1);
  int ans = 1;
  while(true) {
    if (temp_num % K == 0) break;
    else {
      if (hasAppeared[temp_num]) {
        ans = -1;
        break;
      }
      else {
        hasAppeared[temp_num] = true;
        temp_num *= 10;
        temp_num += 7;
        temp_num %= K;
        ++ans;
      }
    }
  }
  cout << ans << endl; 
  return 0;
}