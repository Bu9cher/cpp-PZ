#include <iostream>
#include <string>
using namespace std;

class FlightBooking {
public:
    FlightBooking(int id, int capacity, int reserved);
    void printStatus();
    bool reserveSeats(int number_of_seats);
    bool cancelReservations(int number_of_seats);

private:
    int id;
    int capacity;
    int reserved;
};

FlightBooking::FlightBooking(int id, int capacity, int reserved) {
    this->id = id;
    this->capacity = capacity;

    if (reserved < 0) this->reserved = 0;
    else if (reserved > capacity * 105 / 100) this->reserved = capacity * 105 / 100;
    else this->reserved = reserved;
}

void FlightBooking::printStatus() {
    int percentage = reserved * 100 / capacity;
    cout << "Flight " << id << " : " << reserved << "/" << capacity
         << " (" << percentage << "%) seats reserved" << endl;
}

bool FlightBooking::reserveSeats(int number_of_seats) {
    if (reserved + number_of_seats > capacity * 105 / 100) return false;
    reserved += number_of_seats;
    return true;
}

bool FlightBooking::cancelReservations(int number_of_seats) {
    if (reserved - number_of_seats < 0) return false;
    reserved -= number_of_seats;
    return true;
}

int main() {
    int reserved = 0;
    int capacity = 0;

    cout << "Provide flight capacity: ";
    cin >> capacity;
    cout << "Provide number of reserved seats: ";
    cin >> reserved;

    FlightBooking booking(1, capacity, reserved);
    string command;

    while (command != "quit") {
        booking.printStatus();
        cout << "What would you like to do?: ";
        cin >> command;

        if (command == "add") {
            int seats;
            cin >> seats;
            if (!booking.reserveSeats(seats)) cout << "Cannot perform this operation" << endl;
        } else if (command == "cancel") {
            int seats;
            cin >> seats;
            if (!booking.cancelReservations(seats)) cout << "Cannot perform this operation" << endl;
        }
    }
    return 0;
}
