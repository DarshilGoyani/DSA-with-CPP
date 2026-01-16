#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *


    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int s = 5; s > i; s--)
        {
            cout << "    ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 4; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int s = i; s < 5; s++)
        {
            cout << "    ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << "* ";
        }
        
        cout << endl;
    }
    
    
    

    return 0;
}
