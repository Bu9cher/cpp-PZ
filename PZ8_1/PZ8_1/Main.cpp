#include <iostream>
using namespace std;

int main() {
    const int M = 12;
    int a[M];

    cout << "Enter 12 integer numbers:" << endl;
    for (int i = 0; i < M; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < M - 1; i++) {
        for (int j = 0; j < M - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "Array sorted in ascending order:" << endl;
    for (int i = 0; i < M; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Array sorted in descending order:" << endl;
    for (int i = M - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
