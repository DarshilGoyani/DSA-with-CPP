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
    int same=0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (a[i] == a[j])
            {   
               same++; 
            }
            
        }
        
        if (same == 0)
        {
            cout << endl << endl <<"single number := " << same;
        }
        
    }
    
    
    return 0;
}
