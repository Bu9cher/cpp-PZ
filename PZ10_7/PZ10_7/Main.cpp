#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int n = 3;
    int a[n][n];

    srand(time(0));

    int sum = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 10;
            if (i == j || i + j == n - 1)
                sum += a[i][j];
        }

    cout << "Sum of diagonal elements = " << sum << endl;

    return 0;
}
