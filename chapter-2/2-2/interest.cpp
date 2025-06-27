#include<iostream>
using namespace std;
main(){
    float p,r,n;

    cout << "Enter the Principal Amount :=\t";
    cin >> p;
    
    cout << endl<<endl<<"Enter the Interest Rate :=\t";
    cin >> r;
    
    cout << endl<<endl<<"Enter the Month :=\t";
    cin >> n;
    
    cout << endl<<endl<<endl;
    cout << "Your Simple Interest is :=\t" << (p*r*n)/100 << " rupees";
}