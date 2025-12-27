#include<iostream>
using namespace std;
main(){
    int size1;

    cout << "Enter the size of Array := ";
    cin >> size1;

    int a[size1];
    for (int i = 0; i < size1; i++)
    {
        cout << "Enter the Valur of a[" << i << "] := ";
        cin >> a[i]; 
    }

    int even =0;
    int odd =0;
    for (int i = 0; i < size1; i++)
    {
        if (i % 2 == 0)
        {
            even++;
        }
        else{
            odd++;
        }
        
    }

    cout << endl << "Even Numbers := " << even;
    cout << endl << "Odd Numbers := " << odd;
    
    
}