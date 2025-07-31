#include<iostream>
using namespace std;
main(){
    int i,j;

    // 1  6 11 16 21
    // 2  7 12 17 22
    // 3  8 13 18 23 
    // 4  9 14 19 24
    // 5 10 15 20 25

    for(i=1; i<=5; i++){
        for(j=i; j<=25; j+=5){
            cout << j << " ";
        }
        cout << endl;
    }
}