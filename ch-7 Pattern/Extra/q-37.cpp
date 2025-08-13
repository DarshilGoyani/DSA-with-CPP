#include<iostream>
using namespace std;
main(){
    int i,j;

    // 5
    // 44
    // 333
    // 2222
    // 11111

    for(i=5; i>=1; i--){
        for(j=5; j>=i; j--){
            cout << i <<" ";
        }
        cout << endl;
    }
}