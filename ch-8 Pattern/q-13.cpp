#include<iostream>
using namespace std;
main(){
    int i,j;

    // 1 B 1 D 1
    // B 1 D 1
    // 1 D 1
    // D 1
    // 1

    for(i=1; i<=5; i++){
        for(j=i; j<=5; j++){
            // cout << j << " ";
            if(j%2==0){
                char ch = j+64;
                cout << ch << " ";
            }
            else{
                cout << "1 ";
            }
        }
        cout << endl;
    }
}