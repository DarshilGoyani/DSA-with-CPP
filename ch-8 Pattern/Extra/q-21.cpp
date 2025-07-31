#include<iostream>
using namespace std;
main(){
    int i,j;

    // 0 1 0 1 0
    // 0 0 0 0 0
    // 0 1 0 1 0
    // 0 0 0 0 0
    // 0 1 0 1 0

    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
        if(i%2==0 || j%2!=0){
                cout << "0 ";
            }
            else{
                cout << "1 ";
            }
        }
        cout << endl;
    }
}