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
    
    void display(){
        if (this->top == -1)
        {
            cout << "Stack is Empty" << endl;
        }
        else{
            cout << "Stack := ";
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i];
            }
            
        }
    }
    
};


int main(int argc, char const *argv[])
{
    int num;
    Stack s1(100);
    cout << "Enter the Number := ";
    cin >> num;
    
    while (num != 0)
    {
        int rem = num % 2;
        num = num /2;
        s1.push(rem);

    }
    s1.display();

    return 0;
}
