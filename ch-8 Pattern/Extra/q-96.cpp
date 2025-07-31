#include<iostream>
using namespace std;
main(){
    int i,j,s;

    //     1
    //    22
    //   333
    //  4444
    // 55555

    for(i=1; i<=5; i++){
        for(s=5; s>i; s--){
            cout << "  ";
        }
        for(j=1; j<=i; j++){
            cout << i << " "; 
        }
        cout << endl;
    }
}