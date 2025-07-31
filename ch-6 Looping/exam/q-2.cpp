#include<iostream>
using namespace std;
main(){
    int n,last,rev=0,i=0,mul=0,check;
    cout << "Enter the Number := ";
    cin >> n;
    check =n;
    last = n;
    while(last != 0){
        rev = rev * 10 + (last % 10);
        last /= 10;
    }
    while(rev != 0){
        i++;
        int digit = rev % 10;
        int num = 1;
        for(int j=1; j<=i; j++){
            num *= digit;
        }
        mul += num;
        rev /= 10;
    }
    if(mul == check){
        cout << check << " is a Disarium Number";
    }
    else{
        cout << check << " is not a Disarium Number";
    }
}