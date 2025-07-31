#include<iostream>
using namespace std;
main(){
    int i,j;

    // 1
    // 12
    // 123
    // 1234
    // 12345

    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}