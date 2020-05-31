#include <iostream>
using namespace std;

int main(void) {
    int N;
    int64_t A[110000];
    int64_t ans = 1;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    for (int i = 0; i < N; ++i) {
        ans *= A[i];
    }
    
    if (ans >= 0 && ans <= 1000000000000000000) {
        cout << ans << endl;
    }
    else {
        cout << '-1' << endl;
    }

    return 0;
}