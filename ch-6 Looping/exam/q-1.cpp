#include<iostream>
using namespace std;
main(){
    int n,i=0,a=1,b=1,c;
    cout << "Enter the Number :=  ";
    cin >> n;
    while(i <= n){
        a += b;
        b++;
        cout << a << "\t";
        i++;
    }
    
}