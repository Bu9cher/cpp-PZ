#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int m = 5, n = 7;
    int a[m][n];

    srand(time(0));

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = rand() % 10;

    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++)
            sum += a[i][j];
        cout << "Row " << i << " sum = " << sum << endl;
    }

    return 0;
}
