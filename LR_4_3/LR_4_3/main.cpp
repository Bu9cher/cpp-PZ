#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    float x = 1.0 / a;
    float y = 1.0 / b;

    if (fabs(x - y) <= 0.000001)
        cout << "equal by 0.000001";
    else
        cout << "not equal by 0.000001";

    return 0;
}
