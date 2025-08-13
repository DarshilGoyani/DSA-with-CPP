#include<iostream>
using namespace std;
main(){
    int size1,size2;

    cout << "Enter the Size of Array 1 := ";
    cin >> size1;

    cout << "Enter the Size of Array 2 := ";
    cin >> size2;

    int a[size1];
    for (int i = 0; i < size1; i++)
    {
        cout << " Enter the Value of a[" << i << "] := ";
        cin >> a[i]; 
    }

    int b[size2];
    for (int i = 0; i < size2; i++)
    {
        cout << " Enter the Value of b[" << i << "] := ";
        cin >> b[i]; 
    }

    int sum[size1 + size2];
    if(size1>size2){
        for (int i = 0; i < size1; i++)
        {   
            sum[i] = a[i] + b[i];
            cout << a[i] << " + " << b[i] << " = " << sum[i] << endl;
        }
    }
    else{
        for (int i = 0; i < size2; i++)
        {   
            sum[i] = a[i] + b[i];
            cout << a[i] << " + " << b[i] << " = " << sum[i] << endl;
        }
    }
    
    
    
    
    
}