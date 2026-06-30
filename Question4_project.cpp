#include <iostream>
using namespace std;

const int MAX = 100;

int roll[MAX];
string name[MAX];
float marks[MAX];
int n = 0;

// Function to add student
void addStudent()
{
    cout << "Enter Roll No: ";
    cin >> roll[n];

    cout << "Enter Name: ";
    cin >> name[n];

    cout << "Enter Marks: ";
    cin >> marks[n];

    n++;
    cout << "Student Added Successfully!\n";
}

// Function to display students
void displayStudents()
{
    if (n == 0)
    {
        cout << "No records found!\n";
        return;
    }

    cout << "\nRoll\tName\tMarks\n";
    for (int i = 0; i < n; i++)
    {
        cout << roll[i] << "\t" << name[i] << "\t" << marks[i] << endl;
    }
}

// Function to search student
void searchStudent()
{
    int r, found = 0;
    cout << "Enter Roll No to search: ";
    cin >> r;

    for (int i = 0; i < n; i++)
    {
        if (roll[i] == r)
        {
            cout << "Student Found!\n";
            cout << "Roll: " << roll[i] << "\nName: " << name[i] << "\nMarks: " << marks[i] << endl;
            found = 1;
            break;
        }
    }

    if (!found)
        cout << "Student not found!\n";
}

// Function to update marks
void updateStudent()
{
    int r, found = 0;
    cout << "Enter Roll No to update: ";
    cin >> r;

    for (int i = 0; i < n; i++)
    {
        if (roll[i] == r)
        {
            cout << "Enter new marks: ";
            cin >> marks[i];
            cout << "Marks updated successfully!\n";
            found = 1;
            break;
        }
    }

    if (!found)
        cout << "Student not found!\n";
}

// Function to delete student
void deleteStudent()
{
    int r, found = 0;
    cout << "Enter Roll No to delete: ";
    cin >> r;

    for (int i = 0; i < n; i++)
    {
        if (roll[i] == r)
        {
            for (int j = i; j < n - 1; j++)
            {
                roll[j] = roll[j + 1];
                name[j] = name[j + 1];
                marks[j] = marks[j + 1];
            }
            n--;
            cout << "Student deleted successfully!\n";
            found = 1;
            break;
        }
    }

    if (!found)
        cout << "Student not found!\n";
}

// Main function
int main()
{
    int choice;

    while (true)
    {
        cout << "\n--- Mini Student Management System ---";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Marks";
        cout << "\n5. Delete Student";
        cout << "\n6. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudents();
            break;
        case 3:
            searchStudent();
            break;
        case 4:
            updateStudent();
            break;
        case 5:
            deleteStudent();
            break;
        case 6:
            cout << "Exiting Program...\n";
            return 0;
        default:
            cout << "Invalid choice!\n";
        }
    }
}