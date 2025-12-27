#include<iostream>
using namespace std;
main(){
    int  size;

    cout << "Enter the size of an Array := ";
    cin >> size;

    // taking value of array from user
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Value of a[" << i <<"] := ";
        cin >> a[i];
    }

    // printing old array
    cout << "Old Array := ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }
    

    // finding nagative
    for (int i = 0; i < size; i++)
    {
        if(a[i] < 0){
            a[i] = 0;
        }
    }
    
    // print the new array
    cout << "Updated Array := ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }
    
    
}