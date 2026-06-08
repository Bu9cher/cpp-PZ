#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int n = 5;
    int matrix[n][n];
    int* p = &matrix[0][0];
    srand(time(0));

    cout << "Matrix:" << endl;
    for (int i = 0; i < n * n; i++) {
        *(p + i) = rand() % 20;
        cout.width(4);
        cout << *(p + i);
        if ((i + 1) % n == 0) cout << endl;
    }

    int even = 0, odd = 0;

    cout << "Main diagonal: ";
    for (int i = 0; i < n; i++) cout << *(p + i * n + i) << " ";
    cout << endl;

    cout << "Secondary diagonal: ";
    for (int i = 0; i < n; i++) cout << *(p + i * n + (n - 1 - i)) << " ";
    cout << endl;

    for (int i = 0; i < n * n; i++) {
        if (*(p + i) % 2 == 0) even++;
        else odd++;
    }

    cout << "Even elements = " << even << endl;
    cout << "Odd elements = " << odd << endl;
    return 0;
}
