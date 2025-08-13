#include<iostream>
using namespace std;
main(){
    int i,j;

    // 1 
    // 2  4
    // 3  6 9
    // 4  8 12 16
    // 5 10 15 20 25

    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            cout << j*i << " ";
        }
        cout << endl;
    }
}