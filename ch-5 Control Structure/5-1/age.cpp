#include<iostream>
using namespace std;
main(){
    int age;
    cout << "Enter your Age :  ";
    cin >> age;
    if(age >= 18){
        cout << "You are eligible for vote !!!";
    }
    else{
        cout << "You are not eligible for vote !!!";
    }
}