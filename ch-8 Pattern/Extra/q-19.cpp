#include<iostream>
using namespace std;
main(){
    int i,j;

    // 1 0 1 0 1
    // 0 1 0 1 0
    // 1 0 1 0 1
    // 0 1 0 1 0
    // 1 0 1 0 1

    for(i=1; i<=5; i++){
        for(j=i; j<=i+4; j++){
            if(j%2==0){
                cout << "0 ";
            }
            else{
                cout << "1 ";
            }
        }
        cout << endl;
    }
}