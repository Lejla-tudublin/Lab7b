#ifndef FLIGHT_H
#define FLIGHT_H    

#include <string>
#include <iostream>
using std::string;
using std::cout;
//using std::endl;
using std::cin;
using std::ostream;

class Flight {
private:
    const static int MAX_ADD_INFO = 10;
    std::string flight_number_;
    std::string departure_time_;
    int seat_capacity_ = 0;
    int seat_sold_ = 0;
    string additional_info_[MAX_ADD_INFO]; // Array to hold up to 10 additional info strings
    
public:
    bool add_additional_info(const string& info);
    
    Flight(string flight_number = "", string departure_time = "", int seat_capacity = 0, int seat_sold = 0)
        : flight_number_(flight_number),  
        seat_capacity_(seat_capacity), 
        seat_sold_(seat_sold) {
            departure_time_=departure_time;
        }
    
    // Getters
    const std::string& flight_number() const noexcept { return flight_number_; }
    const std::string& departure_time() const noexcept { return departure_time_; }
    int seat_capacity() const noexcept { return seat_capacity_; }
    int seat_sold() const noexcept { return seat_sold_; }
    int check_available_seats ()const;
    // Setters
    void set_flight_number(const std::string& fn) { flight_number_ = fn; }
    void set_departure_time(const std::string& dt) { departure_time_ = dt; }
    void set_seat_capacity(int capacity) ;
    bool set_seat_sold(int sold) ;
    friend ostream& operator<<(ostream& os, const Flight& flight);
    bool sell_seat(int seats);

};

#endif // FLIGHT_H
