#include <iostream>
using namespace std;
main(){
    int i,j,n=2;

    //  2
    //  4  6
    //  8 10 12
    // 14 16 18 20
    // 22 24 26 28 30

    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            cout << n << " ";
            n+=2;
        }
        cout << endl;
    }
}