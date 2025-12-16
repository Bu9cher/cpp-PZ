#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int m = 4, n = 3;
    int a[m][n];

    srand(time(0));

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = rand() % 20 - 10;

    for (int i = 0; i < m; i++) {
        int count = 0;
        for (int j = 0; j < n; j++)
            if (a[i][j] % 2 == 0)
                count++;
        cout << "Row " << i << ": " << count << " even elements" << endl;
    }

    return 0;
}
