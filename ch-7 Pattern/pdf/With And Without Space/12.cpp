#include<iostream>
using namespace std;
main(){
    int i,j;

    // 55555
    // 4444
    // 333
    // 22
    // 1

    for(i=5; i>=1; i--){
        for(j=1; j<=i; j++){
            cout << i << " ";
        }
        cout<< endl;
    }
}