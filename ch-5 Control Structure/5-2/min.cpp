#include<iostream>
using namespace std;
main(){
    int a ,b;

    cout << endl << "Enter The First Value :=  ";
    cin >> a;
    
    cout << endl << "Enter The Second Value :=  ";
    cin >> b;

    if(a < b){
        cout << endl << "The Minimum Value is :=  " << a;
    }
    else{
        cout << endl << "The Minimum Value is :=  " << b;
    }

}