#include "Flight.h"

int main() {
    cout << "Hello, world!\n";
    Flight arr_flights[5]; // Array to hold 5 Flight objects
    Flight flight1;
    Flight flight2("LX12");
    Flight flight3("BA256", "2024-12-01 15:30");
    Flight flight4("DL789", "2024-11-20 09:00", 180);
    Flight flight5("UA345", "2024-10-15 20:45", 200, 150);
    flight2.set_seat_capacity(120);
    for(Flight f : arr_flights) {
        cout << f << "\n";
    }
    arr_flights[0] = flight1;
    arr_flights[1] = flight2;   
    arr_flights[2] = flight3;
    arr_flights[3] = flight4;
    arr_flights[4] = flight5;
  
    arr_flights[0].set_flight_number("Created with default constructor");
    arr_flights[0].set_departure_time("2024-09-01 12:00");
    arr_flights[1].set_seat_capacity(100);
    arr_flights[1].add_additional_info("95% arrival on time ");
    for(Flight f : arr_flights) {
        cout << f << "\n";
    }     
    for(int i = 1; i < 5; ++i) {
        arr_flights[i].set_seat_sold(i*10);
    }
    for(Flight f : arr_flights) {
        cout << f << "\n";
    }
    /*cout << "before\n" << flight2 << "\n";
   // cout << flight3 << "\n";        
    //cout << flight4 << "\n";
    //cout << flight5 << "\n";
    //flight2.set_flight_number("AF678");
    if (flight2.set_seat_sold(20)) {
            cout << "\n after \n" << flight2 << "\n";
    } else {
        cout << "Failed to update seats sold due to invalid input.\n";
    }   
    flight3.add_additional_info("In-flight WiFi available");
    flight3.add_additional_info("Complimentary snacks provided");   
    cout << flight3 << "\n";
    cout << "on flight " << flight2.flight_number() << "\n";
    cout << flight2.check_available_seats() << " seats available.\n";
    */
    cin.get(); // Pause to see output   
    return 0;
}