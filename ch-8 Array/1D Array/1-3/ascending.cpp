#include<iostream>
using namespace std;
main(){
    int size;

    cout << "Enter the Size of Array := ";
    cin >> size;
    
    // taking array value
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of a[" << i << "] := ";
        cin >> a[i];
    }

    // print original array
    cout << endl << endl << "Original Array";
        for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }
    
    // convert to ascending
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
            
        }
        
    }

    // printing new array
    cout << endl << endl << "Acsending Array";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }
    
    
    
}