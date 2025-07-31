#include<iostream>
using namespace std;
main(){
    int i,j;

    // 10101
    // 10101
    // 10101
    // 10101
    // 10101

    for(i=1; i<=5; i++){
        for(j=0; j<=4; j++){
            if(j%2!=0){
                cout << "0 ";
            }
            else{
                cout << "1 ";
            }
        }
        cout << endl;
    }
}