#include <iostream>
#include <string.h>
// #include "Railway_main.cpp"
using namespace std;

// Q.1 Write a Program to make Railway Reservation System.
// Requirements:
// (A) User Input:
// - Train Number
// - Train Name
// - Source
// - Destination
// - Train Time
// (B) Display Records:
// - All Records
// - By Searching Train Number
// (C) Minimum 3 Input Train Records

class Railway
{
    int train_number;
    char train_name[30];
    char source[20];
    char destination[20];
    char train_time[20];
    int size;
    int choice;

public:
    Railway()
    {
        takingTrainSize();
        setTrainData();
        getTrainData();
    }

    // setter
    void takingTrainSize()
    {
        cout << endl
             << endl;
        cout << "Enter the Number of Train (Minimum 3 is Required) := ";
        cin >> this->size;
    }

    void setTrainData()
    {
        for (int i = 0; i < size; i++)
        {
            cout << endl
                 << endl;
            cout << "Enter the Train Number := ";
            cin >> this->train_number;
            fflush(stdin);
            cout << "Enter the Train Name := ";
            gets(this->train_name);
            cout << "Enter the Train Source := ";
            cin >> this->source;
            cout << "Enter the Train Destination := ";
            cin >> this->destination;
            cout << "Enter the Train Time := ";
            cin >> this->train_time;
        }
    }

    // getter
    void getTrainData()
    {
        for (int i = 0; i < size; i++)
        {
            cout << endl
                 << endl;
            cout << "Train Number := " << this->train_number << endl;
            cout << "Train Name := " << this->train_name << endl;
            cout << "Train Source := " << this->source << endl;
            cout << "Train Destination := " << this->destination << endl;
            cout << "Train Time := " << this->train_time << endl;
        }
    }

    void displayRecords()

    {
        cout << "Press 1 to see All Records \nPress 2 for see Trains by Searching Train Numbers" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            for (int i = 0; i < size; i++)
            {
                cout << endl
                     << endl;
                cout << "Train Number := " << this->train_number << endl;
                cout << "Train Name := " << this->train_name << endl;
                cout << "Train Source := " << this->source << endl;
                cout << "Train Destination := " << this->destination << endl;
                cout << "Train Time := " << this->train_time << endl;
            }

            break;

        case 2:
            for (int i = 0; i < size; i++)
            {
                for (int j = i + 1; i < size; i++)
                {
                    if (i[train_number] == j[train_number])
                    {
                        cout << endl
                             << endl;
                        cout << "Train Number := " << this->train_number << endl;
                        cout << "Train Name := " << this->train_name << endl;
                        cout << "Train Source := " << this->source << endl;
                        cout << "Train Destination := " << this->destination << endl;
                        cout << "Train Time := " << this->train_time << endl;
                    }
                }
            }

        default:
            break;
        }
    }

    
};
