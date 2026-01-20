#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
//    1
//   0 1
//  1 0 1
// 0 1 0 1 
//  1 0 1
//   0 1
//    1

    for (int i = 1; i <= 4; i++)
    {
        for (int  s = 4; s > i; s--)
        {
            cout << " ";
        }
        
        for (int j = i; j >= 1; j--)
        {
            if (j %2 == 0)
            {
                cout << "0 ";
            }
            else{
                cout << "1 ";
            }
            
        }

      
        cout << endl;
    }
    
    for (int i = 3; i >= 1; i--)
    {
        for (int s = i-1; s < 3; s++)
        {
            cout << " ";
        }
        
        for (int j = i; j >= 1; j--)
        {
            if (j %2 == 0)
            {
                cout << "0 ";
            }
            else{
                cout << "1 ";
            }
        }
        
        cout << endl;
    }
    


    return 0;
}
