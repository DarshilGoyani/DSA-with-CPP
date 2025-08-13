#include<iostream>
using namespace std;
main(){
    int size , choice;

    cout << "Enter the size of Array := ";
    cin >> size;

    // taking array value
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of a[" << i << "] := ";
        cin >> a[i];
    }
    do
    {
        cout << endl << "CRUD Operation" << endl << endl;
        cout << "Press 1 for Insert" << endl; 
        cout << "Press 2 for push" << endl; 
        cout << "Press 3 for Fetch" << endl; 
        cout << "Press 4 for Update" << endl; 
        cout << "Press 5 for Delete" << endl; 
        cout << "Press 6 for Pop" << endl; 
        cout << "Press 0 for exit" << endl; 
        
        cin >> choice;

    
        switch (choice)
        {
        case 1:
            system("cls");
            cout << "Insert" << endl << endl;

            // taking new index and number
            int insertIndex,insertValue;
            cout << "Enter the Index where you Went to add New Number := ";
            cin >> insertIndex;
            cout << "Enter The Value := ";
            cin >> insertValue;

            for (int i = size-1; i >= insertIndex; i--)
            {
                a[i+1] = a[i];
            }
            a[insertIndex] = insertValue;
            size++;
            
            break;
        case 2:
            system("cls");
            cout << "Push" << endl << endl;

            // taking new value for push
            int pushValue;
            cout << "Enter the new Value := ";
            cin >> pushValue;
            size++;
            a[size-1] = pushValue;

            break;
        case 3:
            system("cls");
            cout << "Fetch" << endl << endl;
            for (int i = 0; i < size; i++)
            {
                cout << a[i] << "\t";
            }
            
            break;
        case 4:
            system("cls");
            cout << "Update" << endl << endl;

            // taking value and index for update
            int indexUpdate, valueUpdate;
            cout << "Enter the Index Where You Went to Update := ";
            cin >> indexUpdate;
            cout << "Enter the your new Value := ";
            cin >> valueUpdate;
            a[indexUpdate] = valueUpdate;

            break;
        case 5:
            system("cls");
            cout << "Delete" << endl << endl;

            // taking index to delete
            int indexDelete;
            cout << "Enter the Index where you went to Delete := ";
            cin >> indexDelete;
            for (int i = indexDelete; i < size-1; i++)
            {
                    a[i] = a[i+1];
            }
            
            size--;


            break;
        case 6:
            system("cls");
            cout << "Pop" << endl << endl;

            size--;
            break;
        case 0:
            system("cls");
            cout << "Exit" << endl << endl;
            break;
        
        }
    } while (choice != 0);
    
}