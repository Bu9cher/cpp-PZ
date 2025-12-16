#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int n = 10;
    int a[n];

    srand(time(0));

    cout << "Array:" << endl;
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100 - 50;
        cout << a[i] << " ";
    }
    cout << endl;

    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] < a[minIndex])
            minIndex = i;
        if (a[i] > a[maxIndex])
            maxIndex = i;
    }

    int temp = a[minIndex];
    a[minIndex] = a[maxIndex];
    a[maxIndex] = temp;

    cout << "After swapping min and max:" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
