#include <iostream>
using namespace std;

int main() {
    long a = 1;

    for (int i = 1; i <= 15; i++) {
        a = a * i;
        cout << i << " = " << a << endl;
    }
}
