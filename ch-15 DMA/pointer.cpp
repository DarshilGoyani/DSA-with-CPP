#include<iostream>
using namespace std;
int main()
{
    int *a = new int;
    *a = 34;

    cout << "address := " << a;
    cout << "value := " << *a;

    delete a;
    return 0;
}
