#include<iostream>
using namespace std;
main(){
    int row,col;

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

    // printitng all rray
    cout << "\n\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\n\n\nDiagonal Array := \n";

    // process
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                cout << a[i][j];
            }
            
        }
        cout << endl;
    }
    
    
}