#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	double a = 1;
	double b = 0.001;
	double f = cbrt((a - b) / (b + a) * exp(log(cos(a - b) * M_PI / 8) / 0.137));
	cout << "First result: " << f << "\n";

	a = 4;
	b = 3, 141;
	f = (0.75 * exp(1 - b) + 0.31 * exp(1 - a)) / (0.731 + pow(sin((b / a) * M_PI), 2));

	cout << "Second resul: " << f;
}