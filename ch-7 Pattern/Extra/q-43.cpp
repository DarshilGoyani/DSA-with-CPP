#include<iostream>
using namespace std;
main(){
    int i,j;

    // 1
    // 35
    // 579
    // 791113
    // 911131517

    for(i=1; i<=9; i+=2){
        for(j=1; j<=i; j+=2){
            cout << j+i-1 << " ";
        }
        cout << endl;
    }
}