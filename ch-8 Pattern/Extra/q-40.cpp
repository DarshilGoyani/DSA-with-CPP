#include<iostream>
using namespace std;
main(){
    int i,j;

    // 2
    // 24
    // 246
    // 2468
    // 246810

    for(i=2; i<=10; i+=2){
        for(j=2; j<=i; j+=2){
            cout << j << " ";
        }
        cout << endl;
    }
}