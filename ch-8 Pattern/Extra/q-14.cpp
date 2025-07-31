#include<iostream>
using namespace std;
main(){
    int i,j;

    // 5 10 15 20 25
    // 4  9 14 19 24
    // 3  8 13 18 23
    // 2  7 12 17 22
    // 1  6 11 16 21

    for(i=5; i>=1; i--){
        for(j=i; j<=25; j+=5){
            cout << j << " ";
        }
        cout << endl;
    }
}