#include <iostream>
using namespace std;

int main() {
    long long A;
    double B;
    cin >> A >> B;

    long long ans = (A * (long long)(B * 100 + 0.5)) / 100;
    cout << ans << endl;

    return 0;
}