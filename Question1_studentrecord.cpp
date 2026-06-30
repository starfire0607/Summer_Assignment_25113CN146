#include <iostream>
using namespace std;

int main()
{
    int roll[100], n = 0;
    string name[100];
    float marks[100];
    int choice;

    while (true)
    {
        cout << "\n--- Student Record System ---";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Roll Number: ";
            cin >> roll[n];

            cout << "Enter Name: ";
            cin >> name[n];

            cout << "Enter Marks: ";
            cin >> marks[n];

            n++;

            cout << "Student Added Successfully!\n";
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                cout << "No records found!\n";
            }
            else
            {
                cout << "\nRoll\tName\tMarks\n";
                for (int i = 0; i < n; i++)
                {
                    cout << roll[i] << "\t"
                         << name[i] << "\t"
                         << marks[i] << endl;
                }
            }
        }
        else if (choice == 3)
        {
            int r, found = 0;
            cout << "Enter Roll Number to search: ";
            cin >> r;

            for (int i = 0; i < n; i++)
            {
                if (roll[i] == r)
                {
                    cout << "Student Found!\n";
                    cout << "Roll: " << roll[i] << endl;
                    cout << "Name: " << name[i] << endl;
                    cout << "Marks: " << marks[i] << endl;
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Student not found!\n";
        }
        else if (choice == 4)
        {
            cout << "Exiting Program...\n";
            break;
        }
        else
        {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}