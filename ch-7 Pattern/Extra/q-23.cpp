#include<iostream>
using namespace std;
main(){
    int i,j;

    // 11111
    // 00000
    // 11111
    // 00000
    // 11111

    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            if(i%2!=0){
                cout << "1 ";
            }
            else{
                cout << "0 ";
            }
        }
        cout << endl;
    }
}