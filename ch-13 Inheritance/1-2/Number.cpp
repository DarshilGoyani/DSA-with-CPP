#include<iostream>
using namespace std;


class Number{
    protected:
    int num;

    public:
    Number(){
        cout << "Enter the Number := ";
        cin >> this->num;
    }
};

class Squere : public Number{
    public:
    // getter
    void getSquere(){
        cout << "Squere := " << num * num;
    }
};
class Cube : public Number{
    public:
    // getter
    void getCube(){
        cout << "Cube := " << num * num * num;
    }
};


int main()
{
    Squere s1;
    Cube c1;   
    
    s1.getSquere();
    c1.getCube();
    return 0;
}


