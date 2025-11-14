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
        cout << endl;
    }
    for (int i = 2; i <= 5; i++)
    {
        
        for (int j = 1; j <= i; j++)
        {
            cout << j ;
        }
        cout << endl;
    }
    
    return 0;
}