#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int remainder = N % 3;
    int imbalance;

    if (remainder == 0) {
        imbalance = 0;
    } else {
        imbalance = 1;
    }

    cout << imbalance << endl;

    return 0;
}
