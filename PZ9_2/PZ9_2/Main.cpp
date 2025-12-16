#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int n = 10;
    int a[n];
    int A, count = 0;

    srand(time(0));

    cout << "Array:" << endl;
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 50;
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Enter number A: ";
    cin >> A;

    for (int i = 0; i < n; i++) {
        if (a[i] > A)
            count++;
    }

    cout << "Number of elements greater than A: " << count << endl;

    return 0;
}
