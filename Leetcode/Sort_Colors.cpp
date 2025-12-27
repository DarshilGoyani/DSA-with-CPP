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
    cout << "Original Arrya := ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }
    

    // logic
    int min = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (a[i] <= min)
            {
                min = a[i];
            
            }
            
        }
        
    }
    


    // printing updated array
    cout << "Updated Arrya := ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }

    
    return 0;
}
