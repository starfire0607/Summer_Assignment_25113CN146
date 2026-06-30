#include <iostream>
using namespace std;

struct Contact
{
    int id;
    char name[50];
    char phone[15];
};

int main()
{
    Contact c[100];
    int n = 0;
    int choice;

    while (true)
    {
        cout << "\n--- Contact Management System ---";
        cout << "\n1. Add Contact";
        cout << "\n2. View Contacts";
        cout << "\n3. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Contact ID: ";
            cin >> c[n].id;

            cout << "Enter Name: ";
            cin >> c[n].name;

            cout << "Enter Phone Number: ";
            cin >> c[n].phone;

            n++;

            cout << "Contact Added Successfully!\n";
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                cout << "No contacts found!\n";
            }
            else
            {
                cout << "\nID\tName\tPhone\n";
                for (int i = 0; i < n; i++)
                {
                    cout << c[i].id << "\t"
                         << c[i].name << "\t"
                         << c[i].phone << endl;
                }
            }
        }
        else if (choice == 3)
        {
            cout << "Exiting Contact System...\n";
            break;
        }
        else
        {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}