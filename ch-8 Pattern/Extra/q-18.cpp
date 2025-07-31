#include<iostream>
using namespace std;
main(){
    int i,j;

    // 0 1 0 1 0
    // 1 0 1 0 1
    // 0 1 0 1 0
    // 1 0 1 0 1
    // 0 1 0 1 0

    for(i=1; i<=5; i++){
        for(j=i; j<=i+4; j++){
            if(j%2==0){
                cout << "1 ";
            }
            else{
                cout << "0 ";
            }
        }
        cout<< endl;
    }
}