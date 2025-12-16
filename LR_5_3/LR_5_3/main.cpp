#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, h, y;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "h = ";
    cin >> h;

    cout << "--------------------" << endl;
    cout << ":   X   :    Y    :" << endl;
    cout << "--------------------" << endl;

    while (a <= b) {

        if (3 * a - 6 == 0) {
            cout << ": " << a << " : OUT OF ODZ" << endl;
            break;
        }

        y = 1 / (3 * a - 6);

        cout << ": " << a << " : " << y << " :" << endl;

        a = a + h;
    }

    cout << "--------------------" << endl;
}
