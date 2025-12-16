#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int n = 10;
    int a[n];
    bool found = false;

    srand(time(0));

    cout << "Array:" << endl;
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 5; // [0;4]
        cout << a[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            cout << "First zero element index: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Array does not contain zero elements." << endl;
    }

    return 0;
}
