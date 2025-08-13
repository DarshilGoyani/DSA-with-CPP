#include<iostream>
using namespace std;
main(){
    int i,j;

    // -
    // |-
    // -|-
    // |-|-
    // -|-|-

    for(i=1; i<=5; i++){
        for(j=i; j>=1; j--){
            if(j%2==0){
                cout << "| ";
            }
            else{
                cout << "- ";
            }
        }
        cout << endl;
    }
}