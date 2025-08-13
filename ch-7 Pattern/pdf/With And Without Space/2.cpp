#include<iostream>
using namespace std;
main(){
    int i,j;

    // 1
    // 21
    // 321
    // 4321
    // 54321

    for(i=1; i<=5; i++){
        for(j=i; j>=1; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}