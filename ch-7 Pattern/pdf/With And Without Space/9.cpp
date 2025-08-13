#include<iostream>
using namespace std;
main(){
    int i,j;

    // 11111
    // 2222
    // 333
    // 44
    // 5

    for(i=1; i<=5; i++){
        for(j=5; j >=i; j--){
            cout << i << " ";
        }
        cout << endl;
    }
}