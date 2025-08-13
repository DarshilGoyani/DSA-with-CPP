#include<iostream>
using namespace std;
main(){
    char i,j;

    // A
    // AB
    // ABC
    // ABCD
    // ABCDE

    for(i='A'; i<='E'; i++){
        for(j='A'; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}