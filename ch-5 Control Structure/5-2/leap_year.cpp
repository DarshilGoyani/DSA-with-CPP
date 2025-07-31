#include<iostream>
using namespace std;
main(){
    int year;
    cout << endl << "Enter The Year :=  ";
    cin >> year;
    if(year %4 == 0){
        cout << endl << year << " Is Leap Year";
    }
    else{
        cout << endl << year << " Is Not Leap Year";
    }
}