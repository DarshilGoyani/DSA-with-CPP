#include<iostream>
using namespace std;

class P{
    public:
    float temperature;
    P(){
        cout << "Enter the Temperature := ";
        cin >> this->temperature;
    }
};

class Q:public P{
    public:
    float Feh = (temperature * (9/5))+32;
    Q(){
        
        cout <<  endl  << endl << "Fahrenheit := " << Feh;
    }
};

class R:public Q{
    public:
    float kel = ((Feh-32)*(5/9)+273.15);
    R(){
        
        cout << endl << "Kelvin := " << kel;
    }
};