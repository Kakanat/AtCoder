#include <iostream>
using namespace std;

const long long MAX = 1e18;

int main(){
    int N;
    long long A[100010];
    long long ans = 1;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        if (A[i] == 0) {
            cout << 0 << endl;
            return 0;
        }
    }

    for (int i = 0; i < N; ++i) {
        if (A[i] > MAX / ans) {
            cout  << -1 << endl;
            return 0;
        }
        else {
            ans *= A[i];
        }
    }

    cout << ans << endl;
    return 0;
}