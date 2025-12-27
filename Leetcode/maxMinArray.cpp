#include<iostream>
using namespace std;
main(){
    int size1;

    cout << "Enter the size of Arra 1 := ";
    cin >> size1;

    int a[size1];
    for (int i = 0; i < size1; i++)
    {
        cout << "Enter the value of a[" << i << "] := ";
        cin >> a[i];
    }

    int max = a[0];
    int min = a[0];

    for (int i = 0; i < size1; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    
    cout << endl << "Maximum Number := "<<max;
    cout << endl << "Minimum Number := "<<min;
    
}