#include<iostream>
using namespace std;
main(){
    int i,j,n=4,k=0;

    // 1
    // 32
    // 654
    // 10987

    for(i=1; i<=n; i++){
        k+=i;
        for(j=k; j>k-i; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}