#include <iostream>
using namespace std;

int main() {
    long long N;
    cout << "Enter N: ";
    cin >> N;

    int sum = 0;

    while (N > 0) {
        int digit = N % 10;

        if (digit > 2 && (digit % 2 != 0)) {
            sum += digit;
        }

        N /= 10;
    }

    cout << "result = " << sum << endl;

    return 0;
}
