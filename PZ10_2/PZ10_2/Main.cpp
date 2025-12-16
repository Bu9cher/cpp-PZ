#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int m = 6, n = 4;
    int a[m][n];

    srand(time(0));

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = rand() % 20;

    for (int j = 0; j < n; j++) {
        int count = 0;
        for (int i = 0; i < m; i++)
            if (a[i][j] % 2 == 0)
                count++;
        cout << "Column " << j << ": " << count << " even elements" << endl;
    }

    return 0;
}
