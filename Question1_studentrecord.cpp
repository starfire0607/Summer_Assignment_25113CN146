#include <iostream>
using namespace std;

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

    return 0;
}