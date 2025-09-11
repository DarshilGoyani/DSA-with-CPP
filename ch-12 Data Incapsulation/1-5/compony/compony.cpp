#include<iostream>
#include<string.h>
using namespace std;

class Compony {

private:
    int comp_id;
    char comp_name[20];
    int comp_staff_quantity;
    float comp_revenue;
    int comp_import_raw_diamonds; 
    int comp_export_diamonds;
    static char comp_ceo[20];

public:
    


    // CONSTRUCTOR
    Compony(int id, char name[], int staff, float revenue, int imported, int exported) {
        cout << "Enter Company ID := ";
        cin >> this->comp_id;
        fflush(stdin);
        cout << "Enter Company Name := ";
        gets(this->comp_name);
        cout << "Enter Company Staff Quantity := ";
        cin >> this->comp_staff_quantity;
        cout << "Enter Company Revenue := ";
        cin >> this->comp_revenue;
        cout << "Enter Company Import Raw Diamonds := ";
        cin >> this->comp_import_raw_diamonds;
        cout << "Enter Company Export Diamonds := ";
        cin >> this->comp_export_diamonds;

        this->comp_id = id;
        strcpy(this->comp_name, name);
        this->comp_staff_quantity = staff;
        this->comp_revenue = revenue;
        this->comp_import_raw_diamonds = imported;
        this->comp_export_diamonds = exported;

        cout << endl << endl << endl;
        cout << "Company ID := " << this->comp_id << endl;
        cout << "Company Name := " << this->comp_name << endl;
        cout << "Company Staff Quantity := " << this->comp_staff_quantity << endl;
        cout << "Company Revenue := " << this->comp_revenue << endl;
        cout << "Company Import Raw Diamonds := " << this->comp_import_raw_diamonds << endl;
        cout << "Company Export Diamonds := " << this->comp_export_diamonds << endl;
        cout << "Company CEO := " << this->comp_ceo << endl;
    }

    
};

char Compony::comp_ceo[20] = "Darshil Goyani";
