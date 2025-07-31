#include<iostream>
using namespace std;
main(){
    int i,j;

    // 1
    // 2 9               7
    // 3 8 10           11 2
    // 4 7 11 14         3 4 3  
    // 5 6 12 13 15      1 6 1 2

    for(i=1; i <= 5; i++){
        for(j=i; j>=1; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}