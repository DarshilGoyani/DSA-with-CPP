#include<iostream>
using namespace std;
main(){
    int i,j;

    // 10101
    // 0101
    // 101
    // 01
    // 1

    for(i=5; i>=1; i--){
        for(j=i; j>=1; j--){
            if(j %2 ==0){
                cout << "0 ";
            }
            else{
                cout << "1 ";
            }
        }
        cout << endl;
    }
}