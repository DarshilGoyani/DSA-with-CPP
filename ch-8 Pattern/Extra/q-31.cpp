#include<iostream>
using namespace std;
main(){
    char i,j;

    // ABCDE
    // BCDEF
    // CDEFG
    // DEFGH
    // EFGHI

    for(i='A'; i<='E'; i++){
        for(j=i; j<=i+3; j++){
            cout << j << " ";
        }
        cout << j << endl;
    }
}