#include<iostream>
using namespace std;
main(){
    int row,col;

    cout << "Enter the no. of Rows := ";
    cin >> row;
    cout << "Enter the no. of Collumns := ";
    cin >> col;

    // taking array value
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the value of a[" << i << "][" << j << "] := ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    // printing all array
    cout << "\n\n\nOriginal Array\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    // process
    cout << "\n\nBoundary Element\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || j == 0 || i == (row-1) || j == (col-1))
            {
                cout << a[i][j] << "\t";
            }
            
        }
        cout << endl;
    }
    
}