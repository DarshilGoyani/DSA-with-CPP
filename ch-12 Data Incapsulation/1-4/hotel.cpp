#include <iostream>
#include <string.h>
using namespace std;

class Hotel
{
    private:
    int hotel_id;
    char hotel_name[20];
    char hotel_type[20];
    int hotel_rating; 
    static char hotel_location[20];
    int hotel_establish_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;

    public:

    // setter
    void setHotelData(){
        cout << "Enter Hotel ID := ";
        cin >> this->hotel_id;
        fflush(stdin);
        cout << "Enter Hotel Name := ";
        gets(this->hotel_name);
        cout << "Enter Hotel Type := ";
        gets(this->hotel_type);
        cout << "Enter Hotel Rating := ";
        cin >> this->hotel_rating;
        cout << "Enter Hotel Establish Year := ";
        cin >> this->hotel_establish_year;
        cout << "Enter Hotel Staff Quantity := ";
        cin >> this->hotel_staff_quantity;
        cout << "Enter Hotel Room Quantity := ";
        cin >> this->hotel_room_quantity;
    } 

    // getter
    void getHotelData(){
        cout << endl << endl;
        cout << "Hotel ID := " << this->hotel_id << endl;
        cout << "Hotel Name := " << this->hotel_name << endl;
        cout << "Hotel Type := " << this->hotel_type << endl;
        cout << "Hotel Rating := " << this->hotel_rating << endl;
        cout << "Hotel Location := " << this->hotel_location << endl;
        cout << "Hotel Establish Year := " << this->hotel_establish_year << endl;
        cout << "Hotel Staff Quantity := " << this->hotel_staff_quantity << endl;
        cout << "Hotel Room Quantity := " << this->hotel_room_quantity << endl;
        
    }
};

// Static variable definition and initialization
char Hotel::hotel_location[20] = "Surat";
