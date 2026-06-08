#include <iostream>
using namespace std;

int main() {
    int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
    int n = sizeof(vector) / sizeof(vector[0]);

    int* p = vector;
    int* min = vector;

    for (int i = 0; i < n; i++) {
        if (*(p + i) < *min) min = p + i;
    }

    cout << "Minimum element = " << *min << endl;
    return 0;
}
