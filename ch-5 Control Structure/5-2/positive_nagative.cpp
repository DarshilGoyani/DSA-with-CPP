#include<iostream>
using namespace std;
main(){
    int a;

    cout << endl << "Enter The Value :=  ";
    cin >> a;
    if(a > 0){
        cout << endl << "Your Value is Positive";
    }
    else if(a < 0){
        cout << endl << "Your Value is Nagative";
    }
    else{
        cout << endl << "Your Value is Natural";
    }
}