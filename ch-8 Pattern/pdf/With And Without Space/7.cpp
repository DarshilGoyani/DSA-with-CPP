#include<iostream>
using namespace std;
main(){
    int i,j;

    // 12345
    // 1234
    // 123
    // 12
    // 1

    for(i=5; i>=1; i--){
        for(j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}