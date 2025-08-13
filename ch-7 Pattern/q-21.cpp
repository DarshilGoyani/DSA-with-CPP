#include<iostream>
using namespace std;
main(){
    int i,j,n=4;

    // 1
    // 2 6
    // 3 7 10
    // 4 8 11 13
    // 5 9 12 14 15

    for(i=1; i<=5; i++){
        for(j=i; j>=1; j--){
            if (j >= 6)
            {
                cout << i+n << " ";
                n--;
            }
            else{
                cout << i << " ";
            }
            
        }
        cout << endl;
    }
}