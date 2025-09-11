#include<iostream>
using namespace std;

class Result {
    int sub;

public:
    Result() {
        sub = 0;
    }

    void sciData() {
        cout << "Enter marks of Science: ";
        cin >> sub;
    }

    Result operator++() {
        Result r1;
        r1.sub = this->sub + 1;
        return r1;
    }

    Result operator--() {
        Result r1;
        r1.sub = this->sub - 1;
        return r1;
    }

    int getMarks() {
        return sub;
    }

    void display(string subject) {
        cout << subject << " : " << sub << endl;
    }
};

int main() {
    Result sci, math, eng, guj, ss, com;

    sci.sciData();  
    Result r1 = sci;
    eng = --r1;          
    r1 = sci;
    math = --(--(--r1)); 
    r1 = sci;
    ss = --(--r1);      
    r1 = sci;
    guj = ++r1;        
    r1 = sci;
    com = ++(++r1);   

    int total = sci.getMarks() + math.getMarks() + eng.getMarks() +
                guj.getMarks() + ss.getMarks() + com.getMarks();

    float per = total / 6.0;

    char grade;
    if (per >= 90) grade = 'A';
    else if (per >= 80) grade = 'B';
    else if (per >= 70) grade = 'C';
    else if (per >= 60) grade = 'D';
    else grade = 'F';

    cout << "\n----- Marksheet -----\n";
    sci.display("Science");
    math.display("Math");
    eng.display("English");
    guj.display("Gujarati");
    ss.display("Social Science");
    com.display("Computer");
    cout << "Total   : " << total << endl;
    cout << "Percent : " << per << endl;
    cout << "Grade   : " << grade << endl;

    return 0;
}
