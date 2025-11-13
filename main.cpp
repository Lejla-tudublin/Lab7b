#include "Flight.h"

int main() {
    cout << "Hello, world!\n";
    //Flight flight1;
    Flight flight2("LX12");
    Flight flight3("BA256", "2024-12-01 15:30");
    Flight flight4("DL789", "2024-11-20 09:00", 180);
    Flight flight5("UA345", "2024-10-15 20:45", 200, 150);
    flight2.set_seat_capacity(120);
    cout << "before\n" << flight2 << "\n";
   // cout << flight3 << "\n";        
    //cout << flight4 << "\n";
    //cout << flight5 << "\n";
    //flight2.set_flight_number("AF678");
    if (flight2.set_seat_sold(-9)) {
            cout << "\n after \n" << flight2 << "\n";
    } else {
        cout << "Failed to update seats sold due to invalid input.\n";
    }   
    cin.get(); // Pause to see output   
    return 0;
}