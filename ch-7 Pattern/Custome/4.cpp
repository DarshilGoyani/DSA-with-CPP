#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    

// *   *   *   *
//   *   *   *
// *   *   *   *
//   *   *   *

for (int i = 1; i <= 4; i++)
{
    for (int j = i+1; j <= i+7; j++)
    {
        if (j %2 == 0)
        {
            cout << "* ";
        }
        else{
            cout << "  ";
        }
        
    }
    cout << endl;
}



    return 0;
}
