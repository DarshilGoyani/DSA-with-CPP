#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int size;

    cout << "Enter the size of array := ";
    cin >> size;
    
    // taking array input
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of a[" << i << "] := ";
        cin >> a[i];
    }


    // logic
    for (int k = 0; k < size/2; k++)
    {
        int temp = a[k];
        a[k] = a[size-k-1];
        a[size-k-1] = temp;
    }
            
          

    // printing original array
    cout << endl << endl << "Reverce Array := ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }
    
    
    return 0;
}
