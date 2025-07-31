#include<iostream>
using namespace std;
main(){
    char i,j;

    // E J O T Y
    // D I N S X
    // C H M R W
    // B G L Q V
    // A F K P U

    for(i='E'; i>='A'; i--){
        for(j=i; j<=i+20; j+=5){
            cout << j << " ";
        }
        cout << endl;
    }
}