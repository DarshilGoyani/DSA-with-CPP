#include <iostream>
#include <cstring>
using namespace std;

class Railway {
    int train_number;
    char train_name[30];
    char source[20];
    char destination[20];
    char train_time[20];

public:
    void setTrainData() {
        cout << "\nEnter Train Number: ";
        cin >> train_number;
        cin.ignore();
        cout << "Enter Train Name: ";
        cin.getline(train_name, 30);
        cout << "Enter Source: ";
        cin >> source;
        cout << "Enter Destination: ";
        cin >> destination;
        cout << "Enter Time: ";
        cin >> train_time;
    }

    void getTrainData() {
        cout << "\nTrain Number: " << train_number
             << "\nTrain Name: " << train_name
             << "\nSource: " << source
             << "\nDestination: " << destination
             << "\nTime: " << train_time << endl;
    }

    int getNumber() {
        return train_number;
    }
};

int main() {
    int size;
    cout << "Enter number of trains (min 3 required): ";
    cin >> size;
    if(size < 3) size = 3;

    Railway r[size];   // ✅ Array of objects

    // Input
    for(int i=0; i<size; i++) {
        cout << "\n--- Enter details for Train " << i+1 << " ---";
        r[i].setTrainData();
    }

    // Output
    cout << "\n===== All Train Records =====\n";
    for(int i=0; i<size; i++) {
        r[i].getTrainData();
    }

    // Search
    int searchNum;
    cout << "\nEnter train number to search: ";
    cin >> searchNum;

    bool found = false;
    for(int i=0; i<size; i++) {
        if(r[i].getNumber() == searchNum) {
            cout << "\nTrain Found!";
            r[i].getTrainData();
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "\nTrain not found!";
    }

    return 0;
}
