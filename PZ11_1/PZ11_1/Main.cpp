#include <iostream>
using namespace std;

struct Date {
    int hours;
    int minutes;
};

int main() {
    Date time;
    int addMinutes;

    cin >> time.hours;
    cin >> time.minutes;
    cin >> addMinutes;

    int totalMinutes = time.hours * 60 + time.minutes + addMinutes;

    totalMinutes %= (24 * 60);

    time.hours = totalMinutes / 60;
    time.minutes = totalMinutes % 60;

    cout << time.hours << ":" << time.minutes << endl;

    return 0;
}
