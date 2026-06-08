#include <iostream>
#include <string>
using namespace std;

class Fraction {
public:
    Fraction(int numerator, int denominator);
    string toString();
    double toDouble();

private:
    int numerator;
    int denominator;
};

Fraction::Fraction(int numerator, int denominator) {
    this->numerator = numerator;
    this->denominator = denominator;
}

string Fraction::toString() {
    int whole = numerator / denominator;
    int rest = numerator % denominator;
    int den = denominator;

    if (den < 0) {
        den = -den;
        rest = -rest;
    }

    if (rest == 0) return to_string(whole);

    if (whole != 0) {
        if (rest < 0) rest = -rest;
        return to_string(whole) + " " + to_string(rest) + "/" + to_string(den);
    }

    return to_string(numerator) + "/" + to_string(denominator);
}

double Fraction::toDouble() {
    return (double)numerator / denominator;
}

int main() {
    int num, den;
    char slash;
    cin >> num >> slash >> den;

    Fraction fraction(num, den);
    cout << fraction.toString() << " is " << fraction.toDouble() << " in decimal" << endl;
    return 0;
}
