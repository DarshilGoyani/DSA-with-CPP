#include<iostream>
using namespace std;
main(){
    char a,b;

    cout << "Enter the Strating Alphabet :=  ";
    cin >> a;
    cout << "Enter the Ending Alphabet :=  ";
    cin >> b;
    do{
        cout << a++ << "\t";
    }while(a <= b);
}