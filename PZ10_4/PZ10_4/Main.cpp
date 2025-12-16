#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int m = 4, n = 6;
    int a[m][n];

    srand(time(0));

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = rand() % 10;

    for (int j = 0; j < n; j++) {
        int sum = 0;
        for (int i = 0; i < m; i++)
            sum += a[i][j];
        cout << "Column " << j << " sum = " << sum << endl;
    }

    return 0;
}
