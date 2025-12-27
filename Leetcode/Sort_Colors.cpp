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

    // printing original array
    cout << endl << endl << "Original Arrya := ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }
    

    // logic
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (a[j] > a[j+1])
            {
                int swap = a[j];
                a[j] = a[j+1];
                a[j+1] = swap;
            
            }
        }
        
    }
     

    // printing updated array
    cout << endl << endl << "Updated Arrya := ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }

    
    return 0;
}
