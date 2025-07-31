#include<iostream>
using namespace std;
main(){
    for(int i=5; i>=1; i--){
        for(int s=i; s>1; s--){
            cout << "  ";
        }
        for(int j=i; j<=5; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}