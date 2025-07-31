#include<iostream>
using namespace std;
main(){
    int a,b,c,d;

    cout << endl <<"Enter The First Value :=  ";
    cin >> a;
    cout << endl <<"Enter The Second Value :=  ";
    cin >> b;
    cout << endl <<"Enter The Third Value :=  ";
    cin >> c;

    if(a==b && a==c && b==c){
        cout << endl << "All Values Are Equal...";
    }
    else if(a==b || a==c || b==c){
        cout << endl << "Both Values Are Equal...";
    }
    else{
        if(a > b){
            if(a > c){
                cout << endl << a << " is Bigger :=  ";
            }
            else{
                cout << endl << c << " is Bigger :=  ";
            }
        }
        else{
            if(b > c){
                cout << endl << b << " is Bigger :=  ";
            }
            else{
                cout << endl << c << " is Bigger :=  ";
            }
        }
    }
}