#include<iostream>
using namespace std;
main(){
    int i,j;

    // 1 1 2 1 3 1
    // 1 2 2 2 3 2
    // 1 3 2 3 3 3
    // 1 4 2 4 3 4
    // 1 5 2 5 3 5

    for(i=1; i<=5; i++){
        for(j=1; j<=3; j++){
            cout << j << " " << i << " ";
        }
        cout << endl;
    }
}