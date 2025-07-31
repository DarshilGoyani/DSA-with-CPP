#include<iostream>
using namespace std;
main(){
    int i,j;

    // 5
    // 45
    // 345
    // 2345
    // 12345

    for(i=5; i>=1; i--){
        for(j=i; j<=5; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}