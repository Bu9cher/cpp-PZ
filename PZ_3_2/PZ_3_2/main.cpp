#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ukr");;
	int month;
	cout << "Enter month number: ";
	cin >> month;
	switch (month)
	{
	case 1: cout << "Januarry-" << "Січень"; break;
	case 2: cout << "February-" << "Лютий"; break;
	case 3: cout << "March-" << "Березень"; break;
	case 4: cout << "Aprill-" << "Квітень"; break;
	case 5: cout << "May-" << "Травень"; break;
	case 6: cout << "June-" << "Червень"; break;
	case 7: cout << "July-" << "Липень"; break;
	case 8: cout << "August-" << "Серпень"; break;
	case 9: cout << "September-" << "Вересень"; break;
	case 10: cout << "October-" << "Жовтень"; break;
	case 11: cout << "November-" << "Листопад"; break;
	case 12: cout << "December-" << "Грудень"; break;
	default:
		cout << "Error";
		break;
	}
}