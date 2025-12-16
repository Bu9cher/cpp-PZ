#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int n = 10;
    int a[n];

    srand(time(0));

    cout << "Array:" << endl;
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100;
        cout << a[i] << " ";
    }
    cout << endl;

    int max1, max2;

    if (a[0] > a[1]) {
        max1 = a[0];
        max2 = a[1];
    }
    else {
        max1 = a[1];
        max2 = a[0];
    }

    for (int i = 2; i < n; i++) {
        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i] > max2) {
            max2 = a[i];
        }
    }

    cout << "Second largest element: " << max2 << endl;

    return 0;
}
