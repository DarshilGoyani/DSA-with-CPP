#include<iostream>
using namespace std;
main(){
    int i,j;

    //  2  4  6  8 10
    // 12 14 16 18 20
    // 22 24 26 28 30
    // 32 34 36 38 40
    // 42 44 46 48 50
    
    for(i=2; i<=42; i+=10){
        for(j=i; j<=i+8; j+=2){
            cout << j <<" ";
        }
        cout << endl;
    }
}