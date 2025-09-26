#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int size;

    cout << "Enter Array Size := ";
    cin >> size;

    vector<int> v(size); 
    // taking array element
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i+1 << " := ";
        cin >> v[i];
    }

    // printing original array
    cout << "Original Vector := ";
    for (int element : v)
    {
        cout << element << "  ";
    }
    cout << endl << endl;
    
    // reverce process
    for (int i = 0; i < size/2; i++)
    {
        int e = v[i];
        v[i] = v[size - i - 1];
        v[size - i - 1] = e;
    }
    
    // printing reverce array
    cout << "Reverce Vector := ";
    for (int element : v)
    {
        cout << element << "  ";
    }
    cout << endl << endl;
    

    return 0;
}
