#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    
    int nz = 0;
    int z = 0;
    int size;

    cout << "Enter the size of Array := ";
    cin >> size;

    // taking array input
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of a[" << i << "] := ";
        cin >> a[i];
    }


    // printing original array
    cout << endl << endl << "Original Array := ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }
    
    // logic
    
    while (nz < size)
    {
        if (a[nz] != 0)
        {
            int swap = a[nz];
            a[nz] = a[z];
            a[z] = swap;
            nz++;
            z++;
        }
        else{
            nz++;
        }
        
    }


    // printing updated array
    cout << endl << endl << "Updated Array := ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }
        
    
    

    
    return 0;
}
