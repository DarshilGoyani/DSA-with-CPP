#include<iostream>
using namespace std;
main(){
    char i,j;

    // EEEEE
    // DDDDD
    // CCCCC
    // BBBBB
    // AAAAA

    for(i='E'; i>='A'; i--){
        for(j='E'; j>='A'; j--){
            cout << i << " ";
        }
        cout << endl;
    }
}