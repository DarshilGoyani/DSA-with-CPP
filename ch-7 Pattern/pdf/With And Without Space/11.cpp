#include<iostream>
using namespace std;
main(){
    int i,j;

    // 54321
    // 4321
    // 321
    // 21
    // 1

    for(i=5; i>=1; i--){
        for(j=i; j>=1; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}