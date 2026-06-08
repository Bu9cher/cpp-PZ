#include <iostream>
using namespace std;

class AdHocSquare {
private:
    double side;

public:
    AdHocSquare(double side) { this->side = side; }
    void set_side(double side) { this->side = side; }
    double get_area() { return side * side; }
};

class LazySquare {
private:
    double side;
    double area;
    bool side_changed;

public:
    LazySquare(double side) {
        this->side = side;
        this->area = side * side;
        this->side_changed = false;
    }

    void set_side(double side) {
        this->side = side;
        this->side_changed = true;
    }

    double get_area() {
        if (side_changed) {
            area = side * side;
            side_changed = false;
        }
        return area;
    }
};

int main() {
    AdHocSquare a(4);
    LazySquare l(4);

    cout << "AdHocSquare area = " << a.get_area() << endl;
    cout << "LazySquare area = " << l.get_area() << endl;

    a.set_side(5);
    l.set_side(5);

    cout << "AdHocSquare area = " << a.get_area() << endl;
    cout << "LazySquare area = " << l.get_area() << endl;
    return 0;
}
