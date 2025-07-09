#include<iostream>
using namespace std;
main(){
    int num;
    cout << endl << "Enter A Number :=  ";
    cin >> num;

    if(num > 0){
        cout << endl << "Number is Positive";
    }
    else if(num < 0){
        cout << endl << "Number is Nagetive";
    }
    else{
        cout << endl << "Number is Natural";
    }
}