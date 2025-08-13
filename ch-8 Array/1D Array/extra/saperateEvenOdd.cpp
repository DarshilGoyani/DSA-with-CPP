#include<iostream>
using namespace std;
main(){
    int size;

    cout << "Enter the size of Array := ";
    cin >> size;

    // taking array input
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Value of a[" << i << "] := ";
        cin >> a[i];
    }

    // saperating even odd
    for (int i = 0; i < size; i++)
    {
        if (a[i] %2 == 0)
        {
            int c = a[0];
            a[0] = a[i];
            a[1] = c;
        }
        else{
            int c = a[size - 1];
            a[size-1] = a[i];
            a[size -2] = c;
        }
        
    }

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }
    
    
    
}