#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int n = 3;
    int** matrix = new int*[n];

    for (int i = 0; i < n; i++) matrix[i] = new int[n];
    srand(time(0));

    int even = 0, odd = 0;

    cout << "Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 20;
            cout.width(4);
            cout << matrix[i][j];

            if (matrix[i][j] % 2 == 0) even++;
            else odd++;
        }
        cout << endl;
    }

    cout << "Main diagonal: ";
    for (int i = 0; i < n; i++) cout << matrix[i][i] << " ";
    cout << endl;

    cout << "Secondary diagonal: ";
    for (int i = 0; i < n; i++) cout << matrix[i][n - 1 - i] << " ";
    cout << endl;

    cout << "Even elements = " << even << endl;
    cout << "Odd elements = " << odd << endl;

    for (int i = 0; i < n; i++) delete[] matrix[i];
    delete[] matrix;
    return 0;
}
