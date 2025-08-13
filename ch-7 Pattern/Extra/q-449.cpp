#include<iostream>
using namespace std;
main(){
    
    // 1111111 
    //  22222     
    //   333      
    //    4      
    //   555
    //  66666
    // 7777777
    
    for(int i=1; i<=4; i++){
        for(int s=1; s < i; s++){
            cout << " ";
        }
        for(int j=i; j<=7; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}