#include<iostream>
using namespace std;
main(){

// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3         3 2 1
// 1 2             2 1
// 1                 1

    for(int i=5; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        for(int s=i; s<5; s++){
            cout << "    ";
        }
        for(int j=i; j>=1; j--){
            cout << j << " ";
        }
        cout << endl;
    }


}