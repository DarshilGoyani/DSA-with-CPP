#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1;

    vector<int> v2(5,34);

    v2[0] = 1;
    v2[1] = 2;
    v2[2] = 33;
    v2[3] = 4;
    v2[4] = 5;

    vector<int> v3{23,45,67,89,12,34,56};
    for (int i = 0; i <=v2.size(); i++)
    {
        cout << v3[i] << endl;
    }
    
    return 0;
}
