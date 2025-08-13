#include<iostream>
using namespace std;
main(){
    char i,j;

    // ABCDE
    // FGHIJ
    // KLMNO
    // PQRST
    // UVWXY

    for(i='A'; i<='U'; i+=5){
        for(j=i; j<=i+4; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}