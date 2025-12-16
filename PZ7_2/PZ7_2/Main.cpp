#include <iostream>
using namespace std;

int main() {
    double pi4 = 0.0;
    long n;

    cout << "Number of iterations? ";
    cin >> n;

    for (long i = 0; i < n; i++) {
        double sign = (i % 2 == 0) ? 1.0 : -1.0;
        double term = sign / (2.0 * i + 1.0);
        pi4 += term;
    }

    cout.precision(20);
    cout << "Pi = " << (pi4 * 4.0) << endl;

    return 0;
}
