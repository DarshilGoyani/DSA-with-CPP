#include<iostream>
using namespace std;
main(){
    int size1;

    cout << "Enter the size of Array := ";
    cin >> size1;

    int a[size1];
    for (int i = 0; i < size1; i++)
    {
        cout << "Enter the value of a[" << i << "] := ";
        cin >> a[i];
    }

    cout << endl << "Before Reverce := ";
    for (int i = 0; i < size1; i++)
    {
        cout << a[i] <<"\t";
    }

    cout << endl << "After Reverce := ";
    for (int i = size1-1; i >= 0; i--)
    {
        cout << a[i] << "\t";
    }
}