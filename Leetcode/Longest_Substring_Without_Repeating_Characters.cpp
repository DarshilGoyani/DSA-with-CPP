#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    string t;
    cout << "Enter the string := ";
    cin >> s;

    int size = 1;
    t.push_back(s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        for (int j = 0; j < t.size(); j++)
        {
            if (s[i] != t[j])
            {
                t.push_back(s[i]);
            }
        }
        
        
    }
    
    cout << endl << "longest sub string := " << t;
    cout << endl << "original string := " << s;
    
    return 0;
}
