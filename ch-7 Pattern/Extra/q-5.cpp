#include<iostream>
using namespace std;
main(){
    int i,j;

    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1

    for(i=5; i>=1; i--){
        for(j=5; j>=1; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}