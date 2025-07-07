#include<iostream>
using namespace std;
main(){
    int num;
    cout << "Enter the value :  ";
    cin >> num;
    if((num /2) * 2 == num){
        cout << "your number is even !!!";
    }
    else{
        cout << "your number is odd !!!";
    }
}