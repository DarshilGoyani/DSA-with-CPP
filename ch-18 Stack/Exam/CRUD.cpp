#include<iostream>
using namespace std;

class Stack{
    int *arr;
    int size;
    int top;
    int len;
    
    public:

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
        len = 0;
    }
    ~Stack(){
        delete[] arr;
        arr = nullptr; 
    }

    void push(int ele){
        if (this->top == size-1)
        {
            cout << "Stack is Overflow" << endl;
        }
        else{
            this->top++;
            this->arr[this->top] = ele;
            this->len++;
        }
        

    }
    void pop(){
        if (this->top == -1)
        {
            cout << "Stack is Underflow" << endl;
        }
        else{
            this->top--;
            this->len--;
        }
        
    }
    void display(){
        if (this->top == -1)
        {
            cout << "Stack is Empty" << endl;
        }
        else{
            cout << "Stack := ";
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << "  ";
            }
            
        }
    }
    void isEmpty(){
        if (this->top == -1)
        {
            cout << "Stack is Empty" << endl;
        }
        else{
            cout << "Stack is not Empty" << endl;
        }
    }
    void isFull(){
        if (this->top == size-1)
        {
            cout << "Stack is Full" << endl;
        }
        else{
            cout << "Stack is not Full" << endl;
        }
    }



};



int main(int argc, char const *argv[])
{
    int size,choice,ele;


    cout << "Enter the Stack Size := ";
    cin >> size;
    Stack s1(size);
    
    
    do
    {
        cout << endl << endl << endl;
        cout << "press 1 for Push" << endl;
        cout << "press 2 for Pop" << endl;
        // cout << "press 3 for Peak" << endl;
        cout << "press 4 for Display" << endl;
        cout << "press 5 for isEmpty" << endl;
        cout << "press 6 for isFull" << endl;
        // cout << "press 7 for Size" << endl;
        cout << "press 0 for Exit" << endl;
        cout << "Enter your choice := ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the Element := ";
            cin >> ele;
            s1.push(ele);
            break;
        
        case 2:
            s1.pop();
            break;

        case 3:
            s1.display();
            break;
        
        case 4:
            s1.isEmpty();
            break;
        
        case 5:
            s1.isFull();
            break;
        
        case 0:
            system("cls");
            cout << "Exit...";
            break;
        
        
        default:
            break;
        }


    } while (choice != 0);
    
    return 0;
}
