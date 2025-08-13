#include<iostream>
using namespace std;
main(){
    int i,j;

    // 10
    // 10 11
    // 10 11 12
    // 10 11 12 13
    // 10 11 12 13 14
    // 10 11 12 13 14 15

    for(i=10; i<=15; i++){
        for(j=10; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}