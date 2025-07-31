#include<iostream>
using namespace std;

main() {
    int n, rev, sum = 0;
    cout << "Enter the Number :=  ";
    cin >> n;

    while (n > 9 || sum > 9) {
        if(n==0){
            n =sum;
            sum=0;
        }
        sum += n%10;
        n=n/10;
    }

    cout << (n == 0 ? sum : n);
}