#include <iostream>
#include <string>
#include <vector>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int letters[30] = {0};
  int K;
  string S;
  cin >> K;
  cin >> S;
  int total_num = 0;
  for (auto i : S) {
    int c_num = (int)i - 97;
    letters[c_num] += 1;
  }

  return 0;
}