#include<iostream>
using namespace std;

class Queue{
    int front;
    int rear;
    int count;
    int capacity;
    int* array;
public:
    Queue(int size){
        this->capacity = size;
        front = -1;
        rear = -1;
        count = 0;
        array = new int[size];
    }
    ~Queue(){
        delete[] array;
    }
    void enqueue(int ele){
        if(this->rear == this->capacity-1){
            cout << endl << "Queue is Overflow" << endl;
        }
        else if(this->front == -1 && this->rear == -1){
            this->front++;
            this->rear++;
            this->array[this->rear] = ele;
            this->count++;
        }
        else{
            this->rear++;
            this->array[this->rear] = ele;
            this->count++;
        }
    }

    void dequeue(){
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl << "Queue is Undeflow" << endl;
        }
        else{
            this->front++;
            this->count--;
        }
        
    }

    void get_front(){
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl << "Queue is Undeflow" << endl;
        }
        else{
            cout << endl << "First Element := " << this->array[this->front] << endl;
        }
        
    }

    void get_rear(){
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl << "Queue is Undeflow" << endl;
        }
        else{
            cout << endl << "Last Element := " << this->array[this->rear] << endl;
        }
    }

    void display(){
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl << "Queue is Undeflow" << endl;
        }
        else{
            cout << endl;
            cout << "Queue := ";
            for (int i = this->front; i <= this->rear; i++)
            {
                cout << this->array[i] << " ";
            }
            cout << endl;
        }
    }

    void isEmpty(){
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl << "Queue is Empty" << endl;
        }
        else{
            cout << endl << "Queue is not Empty" << endl;
        }
    }

    void isFull(){
        if (this->rear == this->capacity-1)
        {
            cout << endl << "Queue is Full" << endl;
        }
        else{
            cout << endl << "Queue is not Full" << endl;
        }
    }

    void size(){
        cout << endl << "size := " << this->count << endl;
    }
};




int main(int argc, char const *argv[])
{
    int size,choice,ele;

    cout<<"Enter the size of array: ";
    cin >> size;

    Queue q1(size);
    
    do
    {
        cout << endl << endl;
        cout << "Press 1 for Enqueue" << endl;
        cout << "Press 2 for Enqueue" << endl;
        cout << "Press 3 for Front" << endl;
        cout << "Press 4 for Rear" << endl;
        cout << "Press 5 for Display" << endl;
        cout << "Press 6 for isEmpty" << endl;
        cout << "Press 7 for isFull" << endl;
        cout << "Press 8 for Size" << endl;
        cout << "Press 0 for Exit" << endl;
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter the element to be Enqueue: ";
                cin >> ele;
                q1.enqueue(ele);
            break;
            
            case 2:
                cout << "Dequeue operation performed" << endl;
                q1.dequeue();
            break;

            case 3:
                q1.get_front();
            break;

            case 4:
                q1.get_rear();
            break;

            case 5:
                q1.display();
            break;

            case 6:
                q1.isEmpty();
            break;

            case 7:
                q1.isFull();
            break;

            case 8:
                q1.size();
            break;

            case 9:
                system("cls");
                cout << "Exit...";
            break;
        
        default:
            cout << "Invalid Input" << endl;
            break;
        }
    } while (choice != 0);
    
    return 0;
}
