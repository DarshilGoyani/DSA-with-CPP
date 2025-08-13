#include<iostream>
using namespace std;
main(){
    int i,j;

    // 1 3 5 7 9
    // 3 5 7 9
    // 5 7 9
    // 7 9
    // 9

    for(i=1; i<=9; i+=2){
        for(j=i; j<=9; j+=2){
            cout << j << " ";
        }
        cout << endl;
    }
}