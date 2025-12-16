#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int m = 4, n = 7;
    int a[m][n];

    srand(time(0));

    int minVal, row = 0, col = 0;

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 50;
            if (i == 0 && j == 0 || a[i][j] < minVal) {
                minVal = a[i][j];
                row = i;
                col = j;
            }
        }

    cout << "Min value = " << minVal << endl;
    cout << "Position: row " << row << ", column " << col << endl;

    return 0;
}