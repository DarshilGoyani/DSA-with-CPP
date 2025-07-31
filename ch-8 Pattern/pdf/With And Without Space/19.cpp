#include<iostream>
using namespace std;
main(){
    int i,j;

    // 1
    // 23
    // 456
    // 78910
    // 1112131415

    for(i=1; i<=11; i++){
        for(j=i; j<=i+3; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}