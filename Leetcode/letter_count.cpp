#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    
    string name;

    cout << "Enter your name := ";
    cin >> name;

    int size = 1;
    for (int i = 0; i < name.size(); i++)
    {
        for (int j = i+1; j < name.size(); j++)
        {
            if (name[i] == name[j])
            {
                size++;
            }
        }
        cout << name[i] << " := " << size << endl;
        size = 1;
    }
    



    return 0;
}
