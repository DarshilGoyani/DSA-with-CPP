#include<iostream>
using namespace std;
main(){
    int size;

    cout << "Enter the length of Array := ";
    cin >> size;

    // taking array value from user
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of a[" << i << "] := ";
        cin >> a[i]; 
    }

    // taking vakue that user went
    int find;
    cout << endl << "Enter the Value That you Went to Search := ";
    cin >> find;

    // finfding inbdex
    for (int i = 0; i < size; i++)
    {
        if (find == a[i])
        {
            cout << endl << find << " Is at " << i << " Index Number";
            break;
        }
        
    }
    
    // printing whole array
    cout << endl << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }
    
}