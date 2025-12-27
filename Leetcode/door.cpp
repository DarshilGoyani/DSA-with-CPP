#include<iostream>
using namespace std;
main(){
    int size = 100;
    int open = 0 , close = 100;
    bool door = false;


    // taking value of array
    int a[size];
    for (int i = 0; i < size; i++)
    {
        a[i] = i+1;
    }

    // checking doors
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (a[i] % a[j] == 0)
            {
                if (door == true)
                {
                    door = false;
                    close++;
                    open--;
                }
                else{
                    door = true;
                    open++;
                    close--;
                } 
            }
            
        }
        
    }
    cout << "Open Doors := " << open << endl;
    cout << "Close Doors := " << close << endl;
    
    
}