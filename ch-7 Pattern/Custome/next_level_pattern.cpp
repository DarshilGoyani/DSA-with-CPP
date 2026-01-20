#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the Number := ";
    cin >> n;

    int num = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < (n*2)-1; j++)
        {
            if (num <= (n*n))
            {
                cout << num++ << " ";
            }
            else{
                return 0;
            }
        }
        cout << endl;
    }
    



    return 0;
}
