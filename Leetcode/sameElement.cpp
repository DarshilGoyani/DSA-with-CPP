#include<iostream>
using namespace std;
main(){
    int size;

    cout << "Enter the size of Array := ";
    cin >> size;

    // taking array value
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of a[" << i << "] := ";
        cin >> a[i]; 
    }

    // takin value that user went to match
    int find;
    cout << endl << "Enter the Value You Went to Find := ";
    cin >> find;

    // finding same elemnt
    int same=0;
    for (int i = 0; i < size; i++)
    {
        if (find == a[i])
        {
            same++;
        }
        
    }
    
    cout << endl << endl << find << " is " << same << " Time occurse in Array";
    
}