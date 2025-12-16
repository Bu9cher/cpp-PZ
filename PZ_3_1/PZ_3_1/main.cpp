#include <iostream>

using namespace std;

int main() {
	int N;
	int result = 0;
	cout << "Enter number: ";
	cin >> N;
	int a = N / 100;
	int b = (N / 10) % 10;
	int c = N % 10;

	if (N >= 100 && N <= 999) {
		if (a > 5) {
			result += 1;
		}
		if (b > 5) {
			result += 1;
		}
		if (c > 5) {
			result += 1;
		}
		cout << "Result: " << result;
	}
	else {
		cout << "Wrong number.";
	}
}