#include<iostream>
using namespace std;
main(){
    int i,j;

    // 01010
    // 01010
    // 01010
    // 01010
    // 01010

    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            if(j%2==0){
                cout << "1 ";
            }
            else{
                cout << "0 ";
            }
        }
        cout << endl;
    }
}