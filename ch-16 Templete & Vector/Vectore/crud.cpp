#include<iostream>
#include<vector>
using namespace std;

class crud{
    public:

    vector<int> v;

    void getData(){
        cout << "Vector Element := ";
        for (int element : v)
        {
            cout << element << "  ";
        }
        cout << endl;
    }

    void addData(int element){
        v.push_back(element);
    }

    void updateData(int index, int element){
        if (index >= 0 && index < v.size())
        {
            v[index] = element;
        }
        else{
            cout << "Invalid Index";
        }
        
    }

    void deleteData(int index){
        if (index >= 0 && index < v.size())
        {
            v.erase(v.begin() + index);
        }
        else{
            cout << "Invalid Index";
        }
    }

    void showData(){
        cout << endl << endl << endl;
        cout << "Press 1 to Add new Data" << endl;
        cout << "Press 2 to Fetch Data" << endl;
        cout << "Press 3 to Update Data" << endl;
        cout << "Press 4 to Delete Data" << endl;
        cout << "Press 0 to Exit" << endl;
    }
};


int main()
{
    crud c1;
    int choice,element,index;

    do
    {
        c1.showData();
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter Data := ";
            cin >> element;
            c1.addData(element);
            break;
        
        case 2:
            c1.getData();
            break;
        
        case 3:
            cout << "Enter index := ";
            cin >> index;
            cout << "Enter Element := ";
            cin >> element;
            c1.updateData(index,element);
            break;
        
        case 4:
            cout << "Enter Index := ";
            cin >> index;
            c1.deleteData(index);
            break;
        
        case 0:
            system("cls");
            cout << "Exit";
            break;
        
        default:
            break;
        }
    } while (choice != 0);
    

    return 0;
}
