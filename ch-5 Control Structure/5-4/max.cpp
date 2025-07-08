#include<iostream>
using namespace std;
main(){
    int a,b,c;

    cout << endl << "Enter First Value :=  ";
    cin >> a;
    cout << endl << "Enter Second Value :=  ";
    cin >> b;
    cout << endl << "Enter Third Value :=  ";
    cin >> c;

    (a > b)
        ? (a > c)
            ? cout << endl << a << " is max" 
            : cout << endl << c << " is max" 
        : (b > c)
            ? cout << endl << b << " is max" 
            : cout << endl << c << " is max";
    
}