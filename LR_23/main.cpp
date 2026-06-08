#include <iostream>
#include <string>
using namespace std;

class Fraction {
public:
    Fraction(int numerator, int denominator);
    string toString();
    double toDouble();
    Fraction plus(Fraction that);
    Fraction minus(Fraction that);
    Fraction times(Fraction that);
    Fraction by(Fraction that);

private:
    int numerator;
    int denominator;
    void reduce();
};

int gcd(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

Fraction::Fraction(int numerator, int denominator) {
    this->numerator = numerator;
    this->denominator = denominator;
    reduce();
}

void Fraction::reduce() {
    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }
    int d = gcd(numerator, denominator);
    if (d != 0) {
        numerator /= d;
        denominator /= d;
    }
}

string Fraction::toString() {
    int whole = numerator / denominator;
    int rest = numerator % denominator;
    if (rest == 0) return to_string(whole);
    if (whole != 0) {
        if (rest < 0) rest = -rest;
        return to_string(whole) + " " + to_string(rest) + "/" + to_string(denominator);
    }
    return to_string(numerator) + "/" + to_string(denominator);
}

double Fraction::toDouble() { return (double)numerator / denominator; }

Fraction Fraction::plus(Fraction that) {
    return Fraction(numerator * that.denominator + that.numerator * denominator,
                    denominator * that.denominator);
}

Fraction Fraction::minus(Fraction that) {
    return Fraction(numerator * that.denominator - that.numerator * denominator,
                    denominator * that.denominator);
}

Fraction Fraction::times(Fraction that) {
    return Fraction(numerator * that.numerator, denominator * that.denominator);
}

Fraction Fraction::by(Fraction that) {
    return Fraction(numerator * that.denominator, denominator * that.numerator);
}

int main() {
    int n1, d1, n2, d2;
    char slash;
    cin >> n1 >> slash >> d1;
    cin >> n2 >> slash >> d2;

    Fraction f1(n1, d1);
    Fraction f2(n2, d2);

    cout << f1.toString() << " + " << f2.toString() << " = " << f1.plus(f2).toString() << endl;
    cout << f1.toString() << " - " << f2.toString() << " = " << f1.minus(f2).toString() << endl;
    cout << f1.toString() << " * " << f2.toString() << " = " << f1.times(f2).toString() << endl;
    cout << f1.toString() << " / " << f2.toString() << " = " << f1.by(f2).toString() << endl;
    return 0;
}
