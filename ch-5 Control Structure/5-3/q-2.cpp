#include<iostream>
using namespace std;
main(){
    int a,b,c,d;

    cout << endl << "Enter The First Value :=  ";
    cin >> a;
    cout << endl << "Enter The Second Value :=  ";
    cin >> b;
    cout << endl << "Enter The Third Value :=  ";
    cin >> c;
    cout << endl << "Enter The Fourth Value :=  ";
    cin >> d;

    if(a==b && a==c && b==c){
        cout << endl << "All Are Equal..";
    }
    else if(a==b || a==c || b==c){
        cout << endl << "Both Are Equal..";
    }
    else{
        if(a > b){
            if(a > c){
                if(a > d){
                    cout << endl << a << " is Bigger";
                }
                else{
                    cout << endl << d << " is Bigger";
                }
            }
            else{
                if(c > d){
                    cout << endl << c << " is Bigger";
                }
                else{
                    cout << endl << d << " is Bigger";
                }
            }
        }
        else{
            if(b > c){
                if(b > d){
                    cout << endl << b << " is Bigger";
                }
                else{
                    cout << endl << d << " is Bigger";
                }
            }
            else{
                if(c > d){
                    cout << endl << c << " is Bigger";
                }
                else{
                    cout << endl << d << " is Bigger";
                }
            }
          }
    }

}