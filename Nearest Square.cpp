#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int N;
        cin >> N;

        int B = (int) sqrt(N);
        int A = B * B;

        cout << A << endl;
    }

    return 0;
}

