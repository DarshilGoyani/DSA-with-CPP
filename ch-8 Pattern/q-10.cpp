#include<iostream>
using namespace std;
main(){
    int i,j;

    // 1, 11, 111, 1111, 11111,

    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            cout << 1;
        }
        cout << ", ";
    }
}