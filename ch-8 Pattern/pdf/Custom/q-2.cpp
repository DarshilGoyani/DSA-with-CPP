#include<iostream>
using namespace std;
main(){

// 1 
// 1 2 
// 1 2 3
// 1 2 3 4 
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2 
// 1 

    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    for(int i=4; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout << j <<" ";
        }
        cout << endl;
    }


}