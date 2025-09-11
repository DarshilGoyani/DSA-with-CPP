#include<iostream>
using namespace std;

class x{
    public:
    int a;
    int b;
    int c;
};

class Y:public x{
    public:
    // setter
    void setData(){
        cout << "Enter the First Value := ";
        cin >> this->a;
        cout << "Enter the Second Value := ";
        cin >> this->b;
        cout << "Enter the Third Value := ";
        cin >> this->c;
    }

    // getter
    void getData(){
        cout << endl << "Sum := " << this->a + this->b + this->c;
    }
};