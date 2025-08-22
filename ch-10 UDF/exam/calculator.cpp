#include<iostream>
using namespace std;
int sum(int a, int b){
    system("cls");
        cout << endl << endl << "Enter the First Value := ";
        cin >> a;
        cout << "Enter the Second Value := ";
        cin >> b;
    cout << endl << "Addition of " << a << " and " << b << " is " << a+b; 
}
int substraction(int a,int b){
    system("cls");cout << endl << endl << "Enter the First Value := ";
    cin >> a;
    cout << "Enter the Second Value := ";
    cin >> b;
    cout << endl << "Substraction of " << a << " and " << b << " is " << a-b; 
}
int multiplication(int a,int b){
    system("cls");
        cout << endl << endl << "Enter the First Value := ";
        cin >> a;
        cout << "Enter the Second Value := ";
        cin >> b;
    cout << endl << "Multiplication of " << a << " and " << b << " is " << a*b; 
}
int division(int a,int b){
    system("cls");
        cout << endl << endl << "Enter the First Value := ";
        cin >> a;
        cout << "Enter the Second Value := ";
        cin >> b;
    cout << endl << "Division of " << a << " and " << b << " is " << a/b; 
}
int modulos(int a,int b){
    system("cls");
        cout << endl << endl << "Enter the First Value := ";
        cin >> a;
        cout << "Enter the Second Value := ";
        cin >> b;
    cout << endl << "Modulo of " << a << " and " << b << " is " << a%b; 
}
main(){
    int choice,a,b;
    

    while (choice != 0)
    {
        cout << endl << endl << "Press 1 for +" << endl;
        cout << "Press 2 for -" << endl;
        cout << "Press 3 for *" << endl;
        cout << "Press 4 for /" << endl;
        cout << "Press 5 for %" << endl;
        cout << "Press 0 for Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            sum(a,b);
            break;
        
        case 2:
            substraction(a,b);
            break;
        
        case 3:
            multiplication(a,b);
            break;
        
        case 4:
            division(a,b);
            break;
        
        case 5:
            modulos(a,b);
            break;

        case 0:
            system("cls");
            cout << "Exit";
            break;
        
        default:
            system("cls");
            cout << "Invalid Choice";
            break;
        }
    }
    
}