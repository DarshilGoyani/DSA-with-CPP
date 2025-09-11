#include<iostream>
#include "student.cpp"
using namespace std;
int main()
{
    

    // setter
    int stu;
    cout << "Enter Student Number := ";
    cin >> stu;

    Student s[stu];
    for (int i = 0; i < stu; i++)
    {
        s[i].setStudentData();
    }
    
    // s1.setStudentData();

    for (int i = 0; i < stu; i++)
    {
        s[i].getStudentData();
    }
    // s1.getStudentData();
    return 0;
}
