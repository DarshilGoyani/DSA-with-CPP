#include<iostream>
using namespace std;

class Student {


        int stu_id;
        char stu_name[20];
        int stu_age;
        char stu_course[20];
        char  stu_city[20];
        char  stu_email[20];
        char  stu_college[20];

        public:
        // setter
        void setStudentData(){
            cout << endl << endl;
            cout << "Enter your ID := ";
            cin >> this->stu_id;
            fflush(stdin);
            cout << "Enter your Name := ";
            gets(this->stu_name);
            cout << "Enter your Age := ";
            cin >> this->stu_age;
            fflush(stdin);
            cout << "Enter your Course := ";
            gets(this->stu_course);
            cout << "Enter your City := ";
            gets(this->stu_city);
            cout << "Enter your Email := ";
            gets(this->stu_email);
            cout << "Enter your College := ";
            gets(this->stu_college);
        }

        // getter
        void getStudentData(){
            cout << endl << endl << endl;
            cout << "ID \t\t:= " << this->stu_id<< endl;
            cout << "Name \t\t:= " << this->stu_name<< endl;
            cout << "Age \t\t:= "  <<this->stu_age<< endl;
            cout << "Course \t\t:= " << this->stu_course<< endl;
            cout << "City \t\t:= " << this->stu_city<< endl;
            cout << "Email \t\t:= " << this->stu_email<< endl;
            cout << "College \t\t:= " << this->stu_college<< endl;

        }
    };
