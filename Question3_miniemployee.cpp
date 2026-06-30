#include <iostream>
using namespace std;

int main()
{
    int id[100], n = 0;
    string name[100];
    float salary[100];
    int choice;

    while (true)
    {
        cout << "\n--- Mini Employee Management System ---";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Employee ID: ";
            cin >> id[n];

            cout << "Enter Employee Name: ";
            cin >> name[n];

            cout << "Enter Salary: ";
            cin >> salary[n];

            n++;

            cout << "Employee Added Successfully!\n";
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                cout << "No employees found!\n";
            }
            else
            {
                cout << "\nID\tName\tSalary\n";
                for (int i = 0; i < n; i++)
                {
                    cout << id[i] << "\t"
                         << name[i] << "\t"
                         << salary[i] << endl;
                }
            }
        }
        else if (choice == 3)
        {
            int searchId, found = 0;
            cout << "Enter Employee ID to search: ";
            cin >> searchId;

            for (int i = 0; i < n; i++)
            {
                if (id[i] == searchId)
                {
                    cout << "Employee Found!\n";
                    cout << "ID: " << id[i] << endl;
                    cout << "Name: " << name[i] << endl;
                    cout << "Salary: " << salary[i] << endl;
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found!\n";
        }
        else if (choice == 4)
        {
            cout << "Exiting System...\n";
            break;
        }
        else
        {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}