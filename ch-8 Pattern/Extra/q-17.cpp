#include<iostream>
using namespace std;
main(){
    int i,j;

    // 1  3  5  7  9
    // 3  5  7  9 11
    // 5  7  9 11 13
    // 7  9 11 13 15
    // 9 11 13 15 17

    for(i=1; i<=9; i+=2){
        for(j=i; j<=i+8; j+=2){
            cout << j << " ";
        }
        cout << endl;
    }
}