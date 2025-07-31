#include<iostream>
using namespace std;
main(){
    char i,j;

    // ABCDE
    // ABCDE
    // ABCDE
    // ABCDE
    // ABCDE

    for(i='A'; i<='E'; i++){
        for(j='A'; j<='E'; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}