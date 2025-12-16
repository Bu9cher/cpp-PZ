#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array must not be empty." << endl;
        return 0;
    }

    int* a = new int[n];

    cout << "Enter " << n << " integer numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxValue = a[0];
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > maxValue) {
            maxValue = a[i];
            maxIndex = i;
        }
    }

    for (int i = 0; i < maxIndex; i++) {
        if (a[i] < 0) {
            a[i] = 0;
        }
    }

    cout << "Resulting array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    delete[] a;
    return 0;
}
