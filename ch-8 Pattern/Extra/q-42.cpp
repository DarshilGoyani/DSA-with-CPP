#include<iostream>
using namespace std;
main(){
    int i,j;

    // 1
    // 23
    // 345
    // 4567
    // 56789

    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            cout << i+j-1 << " ";
        }
        cout << endl;
    }
}