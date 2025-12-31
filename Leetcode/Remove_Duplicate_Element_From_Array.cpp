#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
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


    // printing old array
    cout << endl << endl << "Original Array := ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }
    

    // logic
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                cout << "same " << a[j];
                for (int k = j; k < size; k++)
                {
                    a[j] = a[j+1];
                }
                size--;
            }
            
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
