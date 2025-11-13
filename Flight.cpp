#include "Flight.h"

ostream &operator<<(ostream &os, const Flight &flight)
 {
        os << flight.flight_number_ << " (" 
        << flight.seat_capacity_ << ") departs at " 
        << flight.departure_time_
        << " sold: " << flight.seat_sold_ << " seats."  ;
        return os;
}

void Flight::set_seat_capacity(int capacity)
{ 
       // seat_capacity_ = (capacity < 0 ? 0 : capacity); 
        if (capacity < 0) {
            seat_capacity_ = 0;
        } else {
            seat_capacity_ = capacity;
        }   
}

bool Flight :: set_seat_sold(int s)
{  
    //seat_sold_ = (s < 0 ? 0 : s); 
    if (s < 0) {
        seat_sold_ = 0;
        return false;
    } 
    if (s > seat_capacity_) {
        seat_sold_ = seat_capacity_;
        return false;
    } 
    seat_sold_ = s;  
    return true;
}
