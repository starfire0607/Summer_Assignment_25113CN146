#include <iostream>
using namespace std;

<<<<<<< HEAD
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
=======
struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    Student s[100];
    int n = 0, choice;

    do
    {
        cout << "\nStudent Record Management System";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter Roll Number: ";
            cin >> s[n].roll;

            cout << "Enter Name: ";
            cin >> s[n].name;

            cout << "Enter Marks: ";
            cin >> s[n].marks;

            n++;
            cout << "Student Record Added Successfully!\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "\nNo Records Found!\n";
            }
            else
            {
                cout << "\nStudent Records:\n";
                for (int i = 0; i < n; i++)
                {
                    cout << "\nRoll No: " << s[i].roll;
                    cout << "\nName: " << s[i].name;
                    cout << "\nMarks: " << s[i].marks << "\n";
                }
            }
            break;

        case 3:
            cout << "\nExiting Program...";
            break;

        default:
            cout << "\nInvalid Choice!";
        }

    } while (choice != 3);
>>>>>>> a5fea2ceb2a48971ff87e099da108c28a02f8571

    return 0;
}