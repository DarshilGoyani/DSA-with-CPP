#include<iostream>
using namespace std;
main(){
    int i,j;

    // 12345
    // 2345
    // 345
    // 45
    // 5

    for(i=1; i<=5; i++){
        for(j=i; j<=5; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
