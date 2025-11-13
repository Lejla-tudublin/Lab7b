#include "Flight.h"

ostream &operator<<(ostream &os, const Flight &flight)
 {
        os << flight.flight_number_ << " (" 
        << flight.seat_capacity_ << ") departs at " 
        << flight.departure_time_
        << " sold: " << flight.seat_sold_ << " seats.\n"  ;
        for(int i=0; i<10; ++i) {
            if (!flight.additional_info_[i].empty()) {
                os << "  Info " << (i+1) << ": " << flight.additional_info_[i] << "\n";
            }
        }
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

bool Flight::sell_seat(int seats)
{
    if (seats < 0) {
        return false;
    }
    if (seat_sold_ + seats > seat_capacity_) {
       return false;
    }
    seat_sold_ += seats;
    return true;
}
bool Flight::add_additional_info(const string& info) {
    //bool isAdded = false;
    for (int i = 0; i < 10; ++i) {
        if (additional_info_[i].empty()) {
            additional_info_[i] = info;
            //isAdded = true;
            // return isAdded;
            return true;
        }
    }
    return false; // Array is full
}