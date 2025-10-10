#include<iostream>
using namespace std;

class Stack{
    char *arr;
    int size;
    int top;

public:
    Stack(int size){
        this->size = size;
        arr = new char[size];
        top = -1;
    }
    ~Stack(){
        delete[] arr;
    }

    void push(char ele){
        if (top == size - 1)
            cout << "Stack Overflow" << endl;
        else
            arr[++top] = ele;
    }

    char pop(){
        if (top == -1){
            cout << "Stack Underflow" << endl;
           
        }
        return arr[top--];
    }

    bool isPalindrom(string str){
        Stack temp(str.length());
        for (char ch : str){
            temp.push(ch);
        }
        for (char ch : str){
            if (ch != temp.pop())
                return false;
        }
        return true;
    }
};

int main(){
    string name;
    Stack s1(100);
    cout << "Enter the Name := ";
    cin >> name;

    if (s1.isPalindrom(name))
        cout << "It is a palindrome." << endl;
    else
        cout << "Not a palindrome." << endl;

    return 0;
}
