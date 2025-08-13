#include<iostream>
using namespace std;
main(){
    int size;

    cout << "Enter the size of Array := ";
    cin >> size;

    // taking value of array
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of a[" << i << "] := ";
        cin >> a[i];
    }

    // printing old array
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }
    
    // converting descending
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (a[i] < a[j])
            {
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
            
        }
        
    }
    
    // printing new array
    cout << endl << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }
    
}