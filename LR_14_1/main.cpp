#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int n = 10;
    double* arr = new double[n];
    srand(time(0));

    int positive = 0;
    int negative = 0;

    cout << "Array:" << endl;
    for (int i = 0; i < n; i++) {
        arr[i] = -2 + (double)rand() / RAND_MAX * 4;
        cout << arr[i] << " ";

        if (arr[i] > 0) positive++;
        else if (arr[i] < 0) negative++;
    }

    cout << endl;
    cout << "Positive numbers = " << positive << endl;
    cout << "Negative numbers = " << negative << endl;

    delete[] arr;
    return 0;
}
