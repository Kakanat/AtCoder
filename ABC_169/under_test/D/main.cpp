#include <iostream>
using namespace std;

int main() {
    int64_t N;
    cin >> N;
    int64_t temp = N;
    int count = 0;
    for (int64_t i = 2; i <= N; i++) {
        if (temp % i == 0) {
            count += 1;
            temp = temp / i;
        }
    }
    cout << count << endl;
    return 0;
}