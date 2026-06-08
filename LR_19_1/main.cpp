#include <iostream>
#include <string>
using namespace std;

int main() {
    string values;
    getline(cin, values);

    string text;
    getline(cin, text);

    int pos = 0;
    while (pos < (int)values.length()) {
        int comma = values.find(',', pos);
        string pair;

        if (comma == -1) pair = values.substr(pos);
        else pair = values.substr(pos, comma - pos);

        int equal = pair.find('=');
        if (equal != -1) {
            string name = pair.substr(0, equal);
            string value = pair.substr(equal + 1);
            string placeholder = "[" + name + "]";

            int found = text.find(placeholder);
            while (found != -1) {
                text.replace(found, placeholder.length(), value);
                found = text.find(placeholder);
            }
        }

        if (comma == -1) break;
        pos = comma + 1;
    }

    cout << text << endl;
    return 0;
}
