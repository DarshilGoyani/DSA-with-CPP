#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int size;

    cout <<"Enter the size of array := ";
    cin >> size;


    // taking array input value
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of a[" << i << "] := ";
        cin >> a[i];
    }


    // printing original array
    cout << endl << endl << "Original array := ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }


    // logic
    int num = 0;
    int missing;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == num)
        {
            num++;
        }
        else{
            missing = num;
            cout << "missing number := " << missing;
            return 0;
        }
        
    }
    
    
    cout << "missing number := " << missing;


    return 0;
}
