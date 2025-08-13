#include<iostream>
using namespace std;
int main()
{
   int size;

   cout << "Enter the size of Array := ";
   cin >> size;

//    taking array value
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of a[" << i << "] := ";
        cin >> a[i];
    }

    // printing nagativ array
    cout << "\n\nNagative Elements := \n";
    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            cout << a[i] << "\t";
        }
        
    }
    
    



    return 0;
}
