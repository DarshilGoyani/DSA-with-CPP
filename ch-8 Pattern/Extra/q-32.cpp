#include<iostream>
using namespace std;
main(){
    char i,j;

    // A F K P U
    // B G L Q V
    // C H M R W
    // D I N S X
    // E J O T Y

    for(i='A'; i<='E'; i++){
        for(j=i; j<=i+20; j+=5){
            cout << j << " ";
        }
        cout << endl;
    }
}