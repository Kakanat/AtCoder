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

int popcount(int n) {
  int ans = 0;
  while (n > 0) {
    if (n%2 == 1) ++ans;
    n /= 2;
  }
  return ans;
}

int f(int n) {
  int ans = 0;
  while (n > 0) {
    n = n % popcount(n);
    ++ans;
  }
  return ans;
}

int binary(int bina){
    int ans = 0;
    for (int i = 0; bina>0 ; i++)
    {
        ans = ans+(bina%2)*pow(10,i);
        bina = bina/2;
    }
    return ans;
}

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;
  rep(i,N) {
    int ans = 0;
    if (S[i] == '0') S[i] = '1';
    else S[i] = '0';
    // rep(r,N) cout << S[r];
    // cout << endl;
    int sum = 0;
    rep(r,N) if (S[r] == '1') ++sum;
    int bin_sum = binary(sum);




    if (S[i] == '0') S[i] = '1';
    else S[i] = '0';
  }
  int cur = 1;
  rep(i,N) cur *= 2;
  for (int i = N-1; i >= 0; ++i) {
    int x = num ^ cur;
    cout << f(x) << endl;
    cur *= 2;
  }
  return 0;
}