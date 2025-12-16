#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float a, b, c, d, e;
    a = 2.3;
    b = 2.3;
    c = 2.123456;
    d = 2.123456;
    e = 2.123456;

    cout << a << endl;
    cout << fixed << setprecision(2) << b << endl;
    cout << c << endl;
    cout << fixed << setprecision(2) << d << endl;
    cout << (int)e << endl;

    return 0;
}
