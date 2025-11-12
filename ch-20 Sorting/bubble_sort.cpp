#include<iostream>
using namespace std;

// void bubbleSort(int[], int size);
void bubbleSort(int a[] , int size){
        int pass = 1;
        while (pass < size)
        {
            for (int i = 0; i < size - pass; i++)
            {
                if(a[i] > a[i+1]){
                    int swap = a[i];
                    a[i] = a[i+1];
                    a[i+1] = swap;
                }
            }
            pass++;
        }
        
    }

main(){
    int size;

    cout << "Enter the size := ";
    cin >> size;

    int a[size];

    // taking array input
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of a[" << i << "] := ";
        cin >> a[i];
    }

    // printing original array
    cout << "original array := ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl << endl;

    // bubble sort logic
    bubbleSort(a, size);

    // printitng sorted array
    cout << "Ascending Order := ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl << endl;
    
    

}