#include <iostream>
using namespace std;

class TrainSeat
{
private:
    int seatNumber;
    string passengerName;
    bool bookingStatus;

public:
    void input()
    {
        cout << "Enter Seat Number: ";
        cin >> seatNumber;

        cout << "Enter Passenger Name: ";
        cin >> passengerName;

        cout << "Enter Booking Status : ";
        cin >> bookingStatus;
    }

    friend class TicketChecker;
};

class TicketChecker
{
public:
    void displaySeatDetails(TrainSeat t)
    {
        cout << "\nSeat Number: " << t.seatNumber << endl;

        if(t.bookingStatus)
        {
            cout << "Status: Booked" << endl;
            cout << "Passenger Name: " << t.passengerName ;
        }
        else
        {
            cout << "Status: Available" ;
        }
    }
};

int main()
{
    TrainSeat t;
    TicketChecker tc;

    t.input();
    tc.displaySeatDetails(t);

    return 0;
}