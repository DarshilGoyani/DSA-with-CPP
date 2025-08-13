#include <iostream>
using namespace std;
main(){
    int i,j;

    // 5
    // 54
    // 543
    // 5432
    // 54321

    for(i=5; i>=1; i--){
        for(j=5; j>=i; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}