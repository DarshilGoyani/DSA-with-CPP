#include<iostream>
using namespace std;
main(){
    int row,col;

    cout << "Enter the no. of Rows := ";
    cin >> row;
    cout << "Enter the no. of Columns := ";
    cin >> col;

    // taking value from user
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the Value of a[" << i << "][" << j << "] := ";
            cin >> a[i][j];
        }
        cout<<endl;
    }

    // taking value from user
    int b[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the Value of b[" << i << "][" << j << "] := ";
            cin >> b[i][j];
        }
        cout<<endl;
    }


    // process values
    int sum[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
        cout<<endl;
    }
 
    // printing array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << sum[i][j] << "\t";
        }
        cout<<endl;
    }
}