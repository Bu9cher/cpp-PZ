#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class IPAddress {
protected:
    string ip;

public:
    IPAddress(string ip) { this->ip = ip; }
    IPAddress(const IPAddress& other) { ip = other.ip; }
    virtual void print() { cout << ip << endl; }
};

class IPAddressChecked : public IPAddress {
private:
    bool correct;

    bool checkIP() {
        stringstream ss(ip);
        string part;
        int count = 0;

        while (getline(ss, part, '.')) {
            if (part.empty()) return false;
            int num = stoi(part);
            if (num < 0 || num > 255) return false;
            count++;
        }
        return count == 4;
    }

public:
    IPAddressChecked(string ip) : IPAddress(ip) { correct = checkIP(); }
    IPAddressChecked(const IPAddressChecked& other) : IPAddress(other) { correct = other.correct; }

    void print() override {
        cout << ip << " - " << (correct ? "Correct" : "Not Correct") << endl;
    }
};

int main() {
    string ip1, ip2, ip3;
    cin >> ip1 >> ip2 >> ip3;

    IPAddress obj1(ip1);
    IPAddressChecked obj2(ip2);
    IPAddressChecked obj3(ip3);

    obj1.print();
    obj2.print();
    obj3.print();
    return 0;
}
