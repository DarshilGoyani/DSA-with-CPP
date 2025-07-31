#include<iostream>
using namespace std;
main(){
    int i,j;

    // 54321
    // 5432
    // 543
    // 54
    // 5

    for(i=1; i<=5; i++){
        for(j=5; j>=i; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}