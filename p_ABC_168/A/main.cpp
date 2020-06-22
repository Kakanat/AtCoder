#include <iostream>
#include <algorithm>
#include <vector>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int N;
  cin >> N;
  switch (N % 10) {
  case 2:
  case 4:
  case 5:
  case 7:
  case 9:
    cout << "hon" << endl;
    break;
  case 0:
  case 1:
  case 6:
  case 8:
    cout << "pon" << endl;
    break;
  case 3:
    cout << "bon" << endl;
    break;
  }
  return 0;
}