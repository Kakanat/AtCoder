#include <iostream>
#include <vector>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  ll N;
  char name[20];
  cin >> N;
  int i = 0;
  while (N > 0) {
    if (N % 26 == 0) {
      name[i] = 26 + 96;
      N /= 26;
      N--;
      i++;
    } else {
      name[i] = N % 26 + 96;
      N /= 26;
      i++;
    }
  }
  i--;
  while(i >= 0) {
    cout << name[i];
    i--;
  }
  cout << endl;
  return 0;
}