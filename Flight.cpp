#include "Flight.h"

ostream &operator<<(ostream &os, const Flight &flight)
 {
        os << flight.flight_number_ << " (" 
        << flight.seat_capacity_ << ") departs at " 
        << flight.departure_time_
        << " sold: " << flight.seat_sold_ << " seats."  ;
        return os;
}