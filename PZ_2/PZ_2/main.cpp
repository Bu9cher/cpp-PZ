#include <iostream>
#include <string>

using namespace std;

int main(){
	float x;
	float b = 3;
	float c = 5;

	cout << "Enter x: ";
	cin >> x;
	if (x < 2) {
		cout << (x - 9 * x * b) / (x - 2 * b * pow(x, 2));
	}
	else if (x >= 2) {
		cout << (x - 2 * c * x) / (x - 5 * c * pow(x,3));
	}
	 else {
		cout << "Error";
	}
}