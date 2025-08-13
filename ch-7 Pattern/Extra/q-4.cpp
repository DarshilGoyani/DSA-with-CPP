#include<iostream>
using namespace std;
main(){
    int i,j;

    // 5 5 5 5 5
    // 4 4 4 4 4
    // 3 3 3 3 3
    // 2 2 2 2 2
    // 1 1 1 1 1

    for(i=5; i>=1; i--){
        for(j=5; j>=1; j--){
            cout << i << " ";
        }
        cout << endl;
    }
}