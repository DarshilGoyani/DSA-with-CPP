#include<iostream>
using namespace std;
main(){
    int size , last , rev=0;

    cout << "Enter the size of Array := ";
    cin >> size;

    // taking array input
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of a[" << i << "] := ";
        cin >> a[i];
    }

    // duplicating array
    int b[size];
    for (int i = 0; i < size; i++)
    {
        b[i] = a[i];
    }
    

    cout << endl << endl << "Palindrome Numbers := ";
    // checking palindrome 
    for (int i = 0; i < size; i++)
    {
        while (a[i] != 0)
        {
            last = a[i] % 10;
            rev = rev * 10 + last;
            a[i] /= 10;
            
        }
        if (b[i] == rev)
            {
                cout << b[i] << "\t";
            }
        rev = 0;
    }
    

    
}