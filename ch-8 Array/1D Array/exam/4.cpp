#include<iostream>
using namespace std;
int main()
{
    int row,col,rowNumber,sum=0;

    cout << "Enter the no. Rows := ";
    cin >> row;
    cout << "Enter the no. Columns := ";
    cin >> col;

    // taking array value
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the value of a[" << i <<"][" << j <<"] := ";
            cin >> a[i][j];
        }
        cout << endl;
    }
    
    cout << endl << endl << "Enter the number of row you went to sum := ";
    cin >> rowNumber;

    // sum
    for (int i = 0; i <= rowNumber; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += a[i][j];
        }
        
    }
        

    cout << endl << endl << "Sum of Row " << rowNumber << "is := " << sum;


    return 0;
}
