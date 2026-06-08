#include <iostream>
#include <ctime>
using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

bool isLeap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int monthLength(int year, int month) {
    int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (month == 2 && isLeap(year)) return 29;
    return days[month - 1];
}

Date today() {
    time_t t = time(NULL);
    tm tl = *localtime(&t);

    Date d;
    d.year = tl.tm_year + 1900;
    d.month = tl.tm_mon + 1;
    d.day = tl.tm_mday;
    return d;
}

int main() {
    Date birth;

    cout << "Enter birth day: ";
    cin >> birth.day;
    cout << "Enter birth month: ";
    cin >> birth.month;
    cout << "Enter birth year: ";
    cin >> birth.year;

    Date current = today();
    int days = 0;

    for (int y = birth.year; y < current.year; y++) days += isLeap(y) ? 366 : 365;
    for (int m = 1; m < current.month; m++) days += monthLength(current.year, m);
    days += current.day;
    for (int m = 1; m < birth.month; m++) days -= monthLength(birth.year, m);
    days -= birth.day;

    cout << "Days passed: " << days << endl;
    return 0;
}
