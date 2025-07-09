#include<iostream>
using namespace std;
main(){
    int num;
    cout << endl << "Enter A Number := ";
    cin >> num;

    if(num %2 == 0){
        cout << endl << "Number is Even";
        if(num %5 ==0){
            cout<<endl<< num << " is divisible by 5";
        }
        else{
            cout<<endl<< num << " is not divisible by 5";
        }
    }
    else{
        cout << endl << "Number is Odd";
        if(num %5 ==0){
            cout<<endl<< num << " is divisible by 5";
        }
        else{
            cout<<endl<< num << " is not divisible by 5";
        }
    }
}