#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{


// 123454321
//  1234321
//   12321
//    121
//     1
//    121
//   12321
//  1234321
// 123454321

    for (int i = 5; i >= 1; i--)
    {
        for (int s = i; s < 5; s++)
        {
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int k = i-1; k >= 1; k--)
        {
            cout << k;
        }
        cout << endl;   
        
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int s = 5; s > i; s--)
        {
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int k = i-1; k >= 1; k--)
        {
            cout << k;
        }
        
        cout << endl;
    }
    


    return 0;
}
