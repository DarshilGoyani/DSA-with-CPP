#include<iostream>
using namespace std;

class Node{
    public:
        int Data;
        Node* Next;
        Node(int data){
            this->Data = data;
            this->Next = nullptr;
        }
};

class LinkedList{
    public:
        Node* Head;
        int count;

        LinkedList(){
            Head = nullptr;
            count = 0;
        }
        void addFromBeggining(int data){
            Node *newNode = new Node(data);
            newNode->Next = this->Head;
            this->Head = newNode; 
            this->count++;  
        }
        void addFromEnd(int data){
            Node *newNode = new Node(data);
            if (this->Head == nullptr || this->count == 0)
            {
                newNode->Next = this->Head;
                this->Head = newNode;
            }
            else 
            {
                Node *ptr = this->Head;
                while (ptr != nullptr)
                {
                    ptr = ptr->Next;
                }
            }
            this->count++;
            
        }
        void addFromPosition(int data, int position){

        }
        void fetchData(){
            Node *ptr = this->Head;
            while (ptr != nullptr)
            {
                cout << ptr->Data << " ";
                ptr = ptr->Next;
            }
            
        }   
};

int main(int argc, char const *argv[])
{
    LinkedList l1;

    int choice, data,position;

    

    do
    {
        cout << endl << endl;
        cout << "press 1 for insert at beginning" << endl;
        cout << "press 2 for insert at end" << endl;    
        cout << "press 3 for insert at position" << endl;
        cout << "press 4 for Fatch the Data" << endl;
        cout << "press 0 to Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the Data" << endl;
            cin >> data;
            l1.addFromBeggining(data);
            break;
        case 2:
            cout << "Enter the Data" << endl;
            cin >> data;
            l1.addFromEnd(data);
            break;
        case 3:
            cout << "Enter the Data" << endl;
            cin >> data;
            cout << "Enter the Position" << endl;
            cin >> position;
            l1.addFromPosition(data,position);
            break;
        case 4:
            cout << "Data := ";
            l1.fetchData();
            break;
        case 0:
            cout << "Exit" << endl;
        default:
        cout << "Invalid Input" << endl;
            break;
        }
    } while (choice != 0);
    
    return 0;
}
