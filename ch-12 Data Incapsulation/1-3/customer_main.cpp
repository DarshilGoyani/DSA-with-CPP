#include<iostream>
#include"customer.cpp"
using namespace std;

int main()
{
    int size;
    cout << "Enter Customer Number := ";
    cin >> size;
    Customer c[size];
    // setter
    for (int i = 0; i < size; i++)
    {
        c[i].setCustomerData();
    }


    // getter
    for (int i = 0; i < size; i++)
    {
        c[i].getCustomerData();
    }
    
    return 0;
}
