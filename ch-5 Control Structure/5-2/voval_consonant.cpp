#include<iostream>
using namespace std;
main(){
    char a;
    cout << endl << "Enter One Character :=  ";
    cin >> a;
    if(a == 97 || a == 101 || a == 105 || a == 111 || a == 117 || a == 65 || a == 69 || a == 73 || a == 79 || a == 85){
        cout << endl << "Your Character is Vowels";
    }
    else{
        cout << endl << "Your Character is Consonant";
    }
}