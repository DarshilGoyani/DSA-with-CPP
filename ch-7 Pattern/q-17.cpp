#include<iostream>
using namespace std;
main(){
    int i,j;

    // 1 B 3 D 5
    // B B B B
    // 3 D 5
    // D D
    // 5

    for(i=1;i<=5; i++){
        for(j=i; j<=5; j++){
            if(i%2==0){
                char ch = i + 64;
                cout << ch << " ";
            }
            else{
                if(j%2==0){
                    char ch = j + 64;
                    cout << ch << " ";
                }
                else{
                    cout << j << " ";
                }
            }
        }
        cout << endl;
    }
}