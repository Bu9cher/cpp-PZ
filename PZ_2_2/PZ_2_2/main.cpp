#include <iostream>
#include <string>

using namespace std;

int main() {
	float x;
	float y;

	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	if ((x >= -1 && x <= 0 && y >= 0 && y <= 1) || (x >= 0 && x <= 1 && y >= -1 && y <= 0)) {
		cout << "Yes";
	}
	else {
		cout << "no";
	}
}