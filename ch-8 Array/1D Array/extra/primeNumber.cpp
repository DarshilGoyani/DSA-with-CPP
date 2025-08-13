#include<iostream>
using namespace std;
main(){
    int size;

    cout << "Enter the size of Array := ";
    cin >> size;

    // taking array value from user
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Value of a[" << i <<"] := ";
        cin >> a[i];
    }

    // chaking prime number
    int check=0;
    for (int i = 0; i < size; i++)
    {
        if((a[i]/a[i]) || a[i]/i){
            check++;
            if (check == 2)
            {
                cout << a[i] << "\t";
            }
            
        }
    }
    
    
}