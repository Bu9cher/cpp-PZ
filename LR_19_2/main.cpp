#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    getline(cin, password);

    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    for (int i = 0; i < (int)password.length(); i++) {
        char c = password[i];
        if (c >= 'A' && c <= 'Z') hasUpper = true;
        else if (c >= 'a' && c <= 'z') hasLower = true;
        else if (c >= '0' && c <= '9') hasDigit = true;
        else hasSpecial = true;
    }

    bool valid = true;
    if (password.length() != 8) {
        cout << "The password must be 8 characters long" << endl;
        valid = false;
    }
    if (!hasUpper) {
        cout << "The password must have at least one upper case letter" << endl;
        valid = false;
    }
    if (!hasLower) {
        cout << "The password must have at least one lower case letter" << endl;
        valid = false;
    }
    if (!hasDigit) {
        cout << "The password must have at least one digit" << endl;
        valid = false;
    }
    if (!hasSpecial) {
        cout << "The password must have at least one special character" << endl;
        valid = false;
    }
    if (valid) cout << "The password is valid" << endl;

    return 0;
}
