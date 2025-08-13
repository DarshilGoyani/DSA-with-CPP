#include<iostream>
using namespace std;
main(){
    int i,j;

    // E             5
    // 50 D          5 4
    // E  D  c       5 4 3
    // 50  D 30 B    5 4 3 2
    // E  D  C B A   5 4 3 2 1

    for(i=5; i>=1; i--){
        for(j=5; j>=i; j--){
            // cout << j << " ";
            if(i%2==0){
                if(j%2!=0){
                    cout << j*10 << " ";
                }
                else{
                    char ch = j + 64;
                    cout << ch << " ";
                }
            }
            else{
                char ch = j + 64;
                cout << ch << " ";
            }
        }
        cout << endl;
    }
}