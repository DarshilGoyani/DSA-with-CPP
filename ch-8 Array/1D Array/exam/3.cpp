#include<iostream>
using namespace std;
int main()
{
    int size;

    cout << "Enter the Size of Row and Column := ";
    cin >>size;
    
    // taking array value
    int a[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "Enter the value of a[" << i << "][" << j << "] := ";
            cin >> a[i][j]; 
        }
        cout << endl;
    }

    // printing original array
    cout << "\n\nOriginal Array := \n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << a[i][j] << "\t"; 
        }
        cout << endl;
    }
    

    // printing transpose array
    cout << "\n\nTranspose Array := \n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
             cout << a[j][i] << "\t"; 
        }
        cout << endl;
    }








    return 0;
}
