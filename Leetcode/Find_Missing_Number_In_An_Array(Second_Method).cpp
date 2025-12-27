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
    int finalSum=0 , arraySum=0;

    for (int i = 0; i < size; i++)
    {
        finalSum += a[i];
        arraySum += a[i];
    }

    finalSum += size;

    int missingElement = finalSum - arraySum;

    cout << "Missing Element := " << missingElement;

}

    