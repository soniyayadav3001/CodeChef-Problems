#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int sum = N * (N + 1) / 2;
        if (sum % 2 == 0)
            cout << N << "\n";
        else
            cout << N - 1 << "\n";
    }
    return 0;
}
