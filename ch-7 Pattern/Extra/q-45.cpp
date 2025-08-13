#include<iostream>
using namespace std;
main(){
    int i,j,n=1;

    // 1
    // 3 5
    // 7 9 11
    // 13 15 17 19
    // 21 23 25 27 29

    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            cout << n << " ";
            n+=2;
        }
        cout << endl;
    }
}