#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;

    cout << "Enter x:" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << "x = ";
        cin >> x;

        y = pow(sin(x), 5) + fabs(5 * x - 1.5);

        cout << "y = " << y << endl;
    }
}
