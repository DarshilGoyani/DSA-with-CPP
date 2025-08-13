#include<iostream>
using namespace std;
main(){
    int i,j;

    // 5 4 3 2 1
    // 4 3 2 1
    // 3 2 1
    // 2 1
    // 1

    for(i=5; i>=1; i--){
        for(j=i; j>=1; j--){
            cout <<j;
        }
        cout << endl;
    }
}