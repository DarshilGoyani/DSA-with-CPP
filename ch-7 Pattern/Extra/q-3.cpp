#include<iostream>
using namespace std;
main(){
    int i,j;

    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5

    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}