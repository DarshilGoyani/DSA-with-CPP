#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j ;
        }
        for (int s = 5; s >= i; s--)
        {
            cout << "  " ;
        }
        for (int k = i; k >= 1; k--)
        {
            cout << k ;
        }
        cout << endl;
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j ;
        }
        for (int s = 5; s >= i; s--)
        {
            cout << "  " ;
        }
        for (int k = i; k >= 1; k--)
        {
            cout << k ;
        }
        cout << endl;
    }
    
    return 0;
}