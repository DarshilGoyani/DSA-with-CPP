#include<iostream>
using namespace std;

void insertionSort(int a[] , int size){
    for (int i = 1; i < size; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    
}

int main(int argc, char const *argv[])
{
    int size;

    cout << "Enter the size of elements := ";
    cin >> size;

    int a[size];

    // taking array input
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of a[" << i << "] := ";
        cin >> a[i];
    }
    // printing original array
    cout << endl << endl <<  "original array := ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }
    
    insertionSort(a, size);

    // printing updated array
    cout << endl << endl <<  "Ascending Order  := ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }
    
    return 0;
}
