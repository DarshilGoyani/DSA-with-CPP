#include<iostream>
using namespace std;
main(){
    int i,j;

    //  4
    //  9  9
    // 16 16 16
    // 25 25 25 25
    // 36 36 36 36 36

    for(i=2; i<=6; i++){
        for(j=2; j<=i; j++){
            cout << i*i << " ";
        }
        cout<< endl;
    }
}