#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    
//     *
//    * *
//   *   *
//  *     *
// *********
//  *     *
//   *   *
//    * *
    // *

    for (int i = 1; i <= 5; i++)
    {
        for (int s = 5; s > i; s--)
        {
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++)
        {
            if (j==1 || i==5)
            {
                cout << "*";
            }
            else{
                cout << " ";
            }
            
        }
        for (int k = i-1; k >= 1; k--)
        {
            if (k==1 || i==5)
            {
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        
        cout << endl;
    }
    
    for (int i = 4; i >= 1; i--)
    {
        for (int s = i; s <= 4; s++)
        {
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++)
        {
            if (j==1)
            {
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        for (int k = i-1; k >= 1; k--)
        {
            if (k==1)
            {
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        
        cout << endl;
    }
    

    return 0;
}
