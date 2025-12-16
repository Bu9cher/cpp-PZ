#include <iostream>
using namespace std;

int main() {
    int n;
    const int MAX_N = 50;

    cout << "Enter side size: ";
    cin >> n;

    if (n <= 1) {
        cout << "The value must be greater than 1" << endl;
        return 0;
    }

    if (n > MAX_N) {
        cout << "Sorry, the side size is too big" << endl;
        return 0;
    }

    cout << '+';
    for (int i = 0; i < n; i++)
        cout << '-';
    cout << '+' << endl;

    for (int i = 0; i < n; i++) {
        cout << '|';
        for (int j = 0; j < n; j++)
            cout << ' ';
        cout << '|' << endl;
    }

    cout << '+';
    for (int i = 0; i < n; i++)
        cout << '-';
    cout << '+' << endl;

    return 0;
}
