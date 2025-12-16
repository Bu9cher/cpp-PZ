#include <iostream>
using namespace std;

struct Date {
    int hours;
    int minutes;
};

int main() {
    Date start, end;

    cin >> start.hours >> start.minutes;
    cin >> end.hours >> end.minutes;

    int startTotal = start.hours * 60 + start.minutes;
    int endTotal = end.hours * 60 + end.minutes;

    if (endTotal < startTotal) {
        endTotal += 24 * 60;
    }

    int duration = endTotal - startTotal;

    Date result;
    result.hours = duration / 60;
    result.minutes = duration % 60;

    cout << result.hours << ":" << result.minutes << endl;

    return 0;
}
