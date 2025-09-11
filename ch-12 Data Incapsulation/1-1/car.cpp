#include<iostream>
using namespace std;

// - car_id
// - car_company_name
// - car_color
// - car_model
// - car_release_year

class Car{
    public:
    int car_id;
    char car_company_name[20];
    char car_color[20];
    char car_model[20];
    int car_release_year;
};
int main()
{
    
    Car car,car2,car3,car4,car5;

    cout << "Enter Car ID := ";
    cin >> car.car_id;
    cout << "Enter Compony Name := ";
    cin >> car.car_company_name;
    cout << "Enter Car Color := ";
    cin >> car.car_color;
    cout << "Enter Car Model := ";
    cin >> car.car_model;
    cout << "Enter Car Release Year := ";
    cin >> car.car_release_year;

    cout << endl << endl;
    cout << "Enter Car ID := ";
    cin >> car2.car_id;
    cout << "Enter Compony Name := ";
    cin >> car2.car_company_name;
    cout << "Enter Car Color := ";
    cin >> car2.car_color;
    cout << "Enter Car Model := ";
    cin >> car2.car_model;
    cout << "Enter Car Release Year := ";
    cin >> car2.car_release_year;

    cout << endl << endl;
    cout << "Enter Car ID := ";
    cin >> car3.car_id;
    cout << "Enter Compony Name := ";
    cin >> car3.car_company_name;
    cout << "Enter Car Color := ";
    cin >> car3.car_color;
    cout << "Enter Car Model := ";
    cin >> car3.car_model;
    cout << "Enter Car Release Year := ";
    cin >> car3.car_release_year;

    cout << endl << endl;
    cout << "Enter Car ID := ";
    cin >> car4.car_id;
    cout << "Enter Compony Name := ";
    cin >> car4.car_company_name;
    cout << "Enter Car Color := ";
    cin >> car4.car_color;
    cout << "Enter Car Model := ";
    cin >> car4.car_model;
    cout << "Enter Car Release Year := ";
    cin >> car4.car_release_year;

    cout << endl << endl;
    cout << "Enter Car ID := ";
    cin >> car5.car_id;
    cout << "Enter Compony Name := ";
    cin >> car5.car_company_name;
    cout << "Enter Car Color := ";
    cin >> car5.car_color;
    cout << "Enter Car Model := ";
    cin >> car5.car_model;
    cout << "Enter Car Release Year := ";
    cin >> car5.car_release_year;

    cout << endl << endl;


    cout << endl << endl << "All Data" << endl <<endl;
    cout << "Car ID := " << car.car_id << endl;
    cout << "Compony Name := " << car.car_company_name << endl;
    cout << "Color := " << car.car_color << endl;
    cout << "Model := " << car.car_model << endl;
    cout << "Release Year := " << car.car_release_year << endl << endl;

    cout << "Car ID := " << car2.car_id << endl;
    cout << "Compony Name := " << car2.car_company_name << endl;
    cout << "Color := " << car2.car_color << endl;
    cout << "Model := " << car2.car_model << endl;
    cout << "Release Year := " << car2.car_release_year << endl << endl;

    cout << "Car ID := " << car3.car_id << endl;
    cout << "Compony Name := " << car3.car_company_name << endl;
    cout << "Color := " << car3.car_color << endl;
    cout << "Model := " << car3.car_model << endl;
    cout << "Release Year := " << car3.car_release_year << endl << endl;

    cout << "Car ID := " << car4.car_id << endl;
    cout << "Compony Name := " << car4.car_company_name << endl;
    cout << "Color := " << car4.car_color << endl;
    cout << "Model := " << car4.car_model << endl;
    cout << "Release Year := " << car4.car_release_year << endl << endl;

    cout << "Car ID := " << car5.car_id << endl;
    cout << "Compony Name := " << car5.car_company_name << endl;
    cout << "Color := " << car5.car_color << endl;
    cout << "Model := " << car5.car_model << endl;
    cout << "Release Year := " << car5.car_release_year << endl << endl;



    return 0;
}
