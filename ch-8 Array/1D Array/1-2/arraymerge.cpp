#include<iostream>
using namespace std;
int main(){
    int size1,size2,size3;

    cout << "Enter the length First Array:= ";
    cin >> size1;

    cout << "Enter the length Second Array:= ";
    cin >> size2;

    cout << "Enter the length Third Array:= ";
    cin >> size3;
    
    int a[size1];
    for(int i=0; i<size1; i++){
        cout << "Enter the Value of a[" << i << "] := ";
        cin >> a[i];
    }

    int b[size2];
    for(int i=0; i<size2; i++){
        cout << "Enter the Value of b[" << i << "] := ";
        cin >> b[i];
    }

    int c[size3];
    for(int i=0; i<size3; i++){
        cout << "Enter the Value of c[" << i << "] := ";
        cin >> c[i];
    }

    int sum[size1 + size2 + size3];
    for (int i = 0; i < size1; i++){
        sum[i] = a[i];
    }

    for(int i=0; i<size2; i++){
        sum[i+size1] = b[i];
    }

    
    cout << endl;
    cout << "Value of Array 1"; 
    for(int i=0; i<size1; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
    cout << "Value of Array 2"; 
    for(int i=0; i<size2; i++){
        cout << b[i] << "\t";
    }
    cout << endl;
    cout << "Value of Array 3"; 
    for(int i=0; i<size3; i++){
        cout << c[i] << "\t";
    }
    cout << endl;
    for(int i=0; i<size3; i++){
        sum[i+size1+size2] = c[i];
    }
    
    
    cout << endl << "Sum of" << endl;
    for(int i=0; i<size1+size2+size3; i++){
        cout << sum[i] << "\t";
    }

    

    
    
}