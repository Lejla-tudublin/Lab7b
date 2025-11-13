#include "Flight.h"

int main() {
    cout << "Hello, world!\n";
    //Flight flight1;
    Flight flight2("LX12");
    Flight flight3("BA256", "2024-12-01 15:30");
    Flight flight4("DL789", "2024-11-20 09:00", 180);
    Flight flight5("UA345", "2024-10-15 20:45", 200, 150);
    cout << flight2 << "\n";
    cout << flight3 << "\n";        
    cout << flight4 << "\n";
    cout << flight5 << "\n";
    
    cin.get(); // Pause to see output   
    return 0;
}