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
    Node *Head;
    int count;
    LinkedList(){
        Head = nullptr;
        count = 0;
    }
    void insert(int data){
        Node *newNode = new Node(data);
        newNode->Next = this->Head;
        this->Head = newNode;
        this->count++;
    }
    void search(int data){
        Node *ptr = this->Head;
        while (ptr != nullptr)
        {
            if (ptr->Data == data)
            {
                cout << "Element Found" << endl;
            }
            ptr = ptr->Next;
        }
    }
    void Delete(int data){
        Node *ptr = this->Head;
        while (ptr != nullptr)
        {
            if(ptr->Data == data){
                delete ptr;
                cout << "Element Deleted" << endl;
            }  
            ptr = ptr->Next;
        }
        
    }
    void reverse(){
        Node *prev = nullptr;
        Node *current = this->Head;
        Node *next = nullptr;
        while (current != nullptr)
        {
            next = current->Next;
            current->Next = prev;
            prev = current;
            current = next;
        }
        this->Head = prev;
        fetch();
    }
    void fetch(){
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
    int choice ,data;
    do
    {
        cout << endl << endl << endl;
        cout << "Press 1 for Insert at Beginning" << endl;
        cout << "Press 2 to Search" << endl;
        cout << "Press 3 to Delete Node" << endl;
        cout << "Press 4 to Reverse the Data" << endl;
        cout << "Press 5 to Fetch Data" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        cout << endl << endl;
            cout << "Enter the Data:= " << endl;
            cin >> data;
            l1.insert(data);
            break;
        
        case 2:
        cout << endl << endl;
            cout << "Enter the Element ti Search := " << endl;
            cin >> data;
            l1.search(data);
            break;
        
        case 3:
            cout << endl << endl;
            cout << "Enter the Element to Delete := " << endl;
            cin >> data;
            l1.Delete(data);
            break;
        
        case 4:
            cout << endl << endl;
            cout << "Reversing Data := " ;
            l1.reverse();
            break;
        
        case 5:
            cout << endl << endl;
            cout << "Fetch Data := " ;
            l1.fetch();
            break;
        
        case 6:
            system("cls");
            break;
        default:
        cout << endl << endl << "Invalid Input" << endl;
            break;
        }
    } while (choice != 0);
    
    return 0;
}
