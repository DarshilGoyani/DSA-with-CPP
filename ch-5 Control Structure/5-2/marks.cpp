#include<iostream>
using namespace std;
main(){
    float html , css , mq , bootstrap , js ,cpp , total , avg;

    cout << endl << "Enter The Marks of HTML :=  ";
    cin >> html;

    cout << endl << "Enter The Marks of CSS :=  ";
    cin >> css;

    cout << endl << "Enter The Marks of Media Query :=  ";
    cin >> mq;

    cout << endl << "Enter The Marks of Bootstrap :=  ";
    cin >> bootstrap;
    
    cout << endl << "Enter The Marks of JavaScript :=  ";
    cin >> js;

    cout << endl << "Enter The Marks of C++ :=  ";
    cin >> cpp;

    if(html > 100 || css > 100 || mq > 100 || bootstrap > 100 || js > 100 || cpp > 100){
        cout << endl << "Please Enter Valid Marks";
    }
    else{
        total = html + css + mq + bootstrap + js + cpp;

        avg = (total/600)*100;
    }

   

    cout << endl << "Total Marks :=  " << total << " / 600";
    cout << endl << "percentage :=  " << avg << "%";
    if(avg >= 91 && avg <= 100){
        cout << endl << "Grade :=  A1";
    }
    else if(avg >= 81 && avg <= 90){
        cout << endl << "Grade :=  A2";
    }
    else if(avg >= 71 && avg <= 80){
        cout << endl << "Grade :=  B1";
    }
    else if(avg >= 61 && avg <= 70){
        cout << endl << "Grade :=  B2";
    }
    else if(avg >= 51 && avg <= 60){
        cout << endl << "Grade :=  C1";
    }
    else if(avg >= 41 && avg <= 50){
        cout << endl << "Grade :=  C2";
    }
    else if(avg >= 33 && avg <= 40){
        cout << endl << "Grade :=  D";
    }
    else if(avg >= 0 && avg <= 32){
        cout << endl << "Better Luck Next Time";
    }
}