#include <iostream>
#include <string>
using namespace std;

class Fraction {
public:
    Fraction(int numerator, int denominator);
    string toString();
    double toDouble();
    bool isGreaterThan(Fraction that);
    bool isLessThan(Fraction that);
    bool isEqual(Fraction that);

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
bool Fraction::isGreaterThan(Fraction that) { return numerator * that.denominator > that.numerator * denominator; }
bool Fraction::isLessThan(Fraction that) { return numerator * that.denominator < that.numerator * denominator; }
bool Fraction::isEqual(Fraction that) { return numerator * that.denominator == that.numerator * denominator; }

int main() {
    int n1, d1, n2, d2;
    char slash;
    cin >> n1 >> slash >> d1;
    cin >> n2 >> slash >> d2;

    Fraction f1(n1, d1);
    Fraction f2(n2, d2);

    cout << f1.toString() << " ";
    if (f1.isGreaterThan(f2)) cout << ">";
    else if (f1.isLessThan(f2)) cout << "<";
    else cout << "=";
    cout << " " << f2.toString() << endl;
    return 0;
}
