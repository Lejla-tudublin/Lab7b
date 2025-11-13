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
    std::string flight_number_;
    std::string departure_time_;
    int seat_capacity_ = 0;
    int seat_sold_ = 0;
    
public:
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

    // Setters
    void set_flight_number(const std::string& fn) { flight_number_ = fn; }
    void set_departure_time(const std::string& dt) { departure_time_ = dt; }
    void set_seat_capacity(int capacity) { seat_capacity_ = (capacity < 0 ? 0 : capacity); }
    void set_seat_sold(int sold) { seat_sold_ = (sold < 0 ? 0 : sold); }
    friend ostream& operator<<(ostream& os, const Flight& flight);
};

#endif // FLIGHT_H
