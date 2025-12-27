#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int size,val;
    cout << "Enter the size := ";
    cin >> size;

    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of  a[" << i << "] := ";
        cin >> a[i];
    }

    cout << "Enter the value you went to remove := ";
    cin >> val;

    cout << endl << endl << "Original Array := ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    for (int i = 0; i < size; i++)
    {
        if (a[i] == val)
        {
            for(int j=i; j < size; j++){
                a[j] = a[j+1];
            }
            size--;
        }
        
    }
    
    cout << endl << endl << "Final Array := ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
