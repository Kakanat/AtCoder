#include <iostream>
#include <vector>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  char a;
  cin >> a;
  if (a >= 'a' && a <= 'z') {
    cout << 'a' << endl;
    return 0;
  }
  cout << 'A' << endl;
  return 0;
}