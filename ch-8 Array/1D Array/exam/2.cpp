#include<iostream>
using namespace std;
int main()
{
    int row,col,max=0;
    cout << "Enter the no. of Rows := ";
    cin >> row;
    cout << "Enter the no. of Columns := ";
    cin >> col;

    // taking array value
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the Value of a[" << i << "][" << j << "] := ";
            cin >> a[i][j];
        }
        cout << endl;
        
    }
    
    // finding largest value
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            for (int k = i; k < row; k++)
            {
                for (int l = j; l < col; l++)
                {
                    if (a[i][j] > a[k][l])
                    {
                        max = a[i][j];
                    }
                    
                }
                
            }
            
        }
        
    }

    cout << endl << endl << "Maximum Element := " << max;
    





    return 0;
}
