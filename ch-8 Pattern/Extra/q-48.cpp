#include <iostream>
using namespace std;
main()
{
    int i, j;

    //  1             5
    //  6  2          4
    // 10  7  3       3  4
    // 13 11  8 4     2  3  4
    // 15 14 12 9 5   1  2  3  4

    /*
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5

    */
    int n = 1, a = 1;
    int d = 5;
    int x, y;

    for (i = 1, x = 5; i <= 5; i++, x--)
    {
        for (j = 1, y = x; j <= i; j++, y++)
        {

            cout << a << " ";
            a -= y;
        }
        n = n + d;
        a = n;
        d--;
        cout << endl;
    }
}