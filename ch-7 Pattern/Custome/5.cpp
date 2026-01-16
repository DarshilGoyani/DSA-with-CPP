#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    

// A
// B C
// D E F
// G H I J
// K L M N O
char ch = 'A';
for (int i = 1; i <= 5; i+=1)
{
    for (int j = 1; j <= i; j++)
    {
        cout << ch << " ";
        ch++;
    }
    cout << endl;
}



    return 0;
}
