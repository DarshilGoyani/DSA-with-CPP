#include<iostream>
using namespace std;
main(){

    // *******
    //  *****
    //   ***
    //    *
    //   ***
    //  *****
    // *******   

    for(int i=1; i<=7; i+=2){
        for(int s=1; s<i; s++){
            cout << " ";
        }
        for(int j=7; j>=i; j--){
            cout << "* ";
        }

        cout << endl;
    }
    for(int i=3; i<=7; i+=2){
        for(int s=7; s>i; s--){
            cout << " ";
        }
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}