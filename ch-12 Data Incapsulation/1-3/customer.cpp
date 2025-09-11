#include<iostream>
#include<string.h>
using namespace std;

class Customer{

    int cust_id;
    char cust_name[20];
    int cust_age;
    char cust_city[20];
    int cust_mobile_number;
    char cust_simcard_validity[20]; 
    char cust_telecom_brand_name[20];

    public:

    // setter
    void setCustomerData(){
        cout << endl << endl << endl;
        cout << "Enter your ID := ";
        cin >> this->cust_id;
        fflush(stdin);
        cout << "Enter your Name := ";
        gets(this->cust_name);
        cout << "Enter your Age := ";
        cin >> this->cust_age;
        fflush(stdin);
        cout << "Enter your City := ";
        gets(this->cust_city);
        cout << "Enter your Mobile Number := ";
        cin >> this->cust_mobile_number;
        fflush(stdin);
        cout << "Enter your simcard validity := ";
        gets(this->cust_simcard_validity);
        cout << "Enter your telecom brand name := ";
        gets(this->cust_telecom_brand_name);

    }

    // getter
    void getCustomerData(){
        cout << endl << endl << endl;
        cout << "ID := " << this->cust_id << endl;
        cout << "Name := " << this->cust_name << endl;
        cout << "Age := " << this->cust_age << endl;
        cout << "City := " << this->cust_city << endl;
        cout << "Mobile Number := " << this->cust_mobile_number << endl;
        cout << "simcard validity := " << this->cust_simcard_validity << endl;
        cout << "telecom brand name := " << this->cust_telecom_brand_name << endl;
    }
};