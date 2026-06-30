#include <iostream>
using namespace std;

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    Employee e[100];
    int n = 0;
    int choice;

    while (true)
    {
        cout << "\n--- Employee Management System ---";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Employee ID: ";
            cin >> e[n].id;

            cout << "Enter Name: ";
            cin >> e[n].name;

            cout << "Enter Salary: ";
            cin >> e[n].salary;

            n++;

            cout << "Employee Added Successfully!\n";
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                cout << "No records found!\n";
            }
            else
            {
                cout << "\nID\tName\tSalary\n";
                for (int i = 0; i < n; i++)
                {
                    cout << e[i].id << "\t"
                         << e[i].name << "\t"
                         << e[i].salary << endl;
                }
            }
        }
        else if (choice == 3)
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