#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int size;

    cout << "Entre the size of arrray := ";
    cin >> size;

    // taking array input
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of a[" << i << "] := ";
        cin >> a[i];
    }

    // logic
    int sum =0;
    for(int i; i<size; i++){
        sum ^= a[i];
    }
    cout << "Single Value := " << sum ;
    
    return 0;
}
