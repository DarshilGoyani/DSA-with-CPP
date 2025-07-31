#include<iostream>
using namespace std;
main(){
    int i,j,n=1;

    // 1
    // 23
    // 456
    // 78910

    for(i=1; i<=4; i++){
        for(j=1; j<=i; j++){
            cout << n << " ";
            n++;
        }
        cout << endl;
    }
}