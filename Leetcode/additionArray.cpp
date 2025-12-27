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

    // taking n value
    int n;
    cout << endl << endl << "Enter the Value that you Went to sum := ";
    cin >> n;
    cout << endl << endl;
    // checking array
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (a[i] + a[j] == n)
            {
                cout << a[i] << "\t" << a[j] << endl;
            }
            
        }
        
    }
    
    
}