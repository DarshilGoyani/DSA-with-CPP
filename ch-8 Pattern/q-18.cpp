#include<iostream>
using namespace std;
main(){
    int i,j;

    // a B c D e
    // 2 c 4 e
    // c D e
    // 4 e
    // e

    for(i=1; i<=5; i++){
        for(j=i;j<=5; j++){
            if(i%2==0){
                if(j%2==0){
                    cout << j << " ";
                }
                else{
                    char ch = j + 96;
                    cout << ch << " ";
                }
            }
            else{
                if(j%2!=0){
                    char ch = j + 96;
                    cout << ch << " ";
                }
                else{
                    char ch = j + 64;
                    cout << ch << " ";
                }
            }
        }
        cout << endl;
    }
}