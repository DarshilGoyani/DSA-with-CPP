#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int size;

    cout << "Enter the size of element := ";
    cin >> size;

    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of a[" << i << "] := ";
        cin >> a[i];
    }

    int num=1;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                num++;
            }
            
        }
        cout << a[i] << " := " << num << endl;
        num = 1;
    }
    

    
    return 0;
}
