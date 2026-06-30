#include <iostream>
using namespace std;

struct Account
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    Account a[100];
    int n = 0;
    int choice;

    while (true)
    {
        cout << "\n--- Bank Account System ---";
        cout << "\n1. Create Account";
        cout << "\n2. Display Accounts";
        cout << "\n3. Deposit Money";
        cout << "\n4. Withdraw Money";
        cout << "\n5. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Account Number: ";
            cin >> a[n].accNo;

            cout << "Enter Name: ";
            cin >> a[n].name;

            cout << "Enter Initial Balance: ";
            cin >> a[n].balance;

            n++;
            cout << "Account Created Successfully!\n";
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                cout << "No accounts found!\n";
            }
            else
            {
                cout << "\nAccNo\tName\tBalance\n";
                for (int i = 0; i < n; i++)
                {
                    cout << a[i].accNo << "\t"
                         << a[i].name << "\t"
                         << a[i].balance << endl;
                }
            }
        }
        else if (choice == 3)
        {
            int acc;
            float amt;
            cout << "Enter Account Number: ";
            cin >> acc;

            bool found = false;

            for (int i = 0; i < n; i++)
            {
                if (a[i].accNo == acc)
                {
                    cout << "Enter Deposit Amount: ";
                    cin >> amt;
                    a[i].balance += amt;
                    cout << "Amount Deposited Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Account not found!\n";
        }
        else if (choice == 4)
        {
            int acc;
            float amt;
            cout << "Enter Account Number: ";
            cin >> acc;

            bool found = false;

            for (int i = 0; i < n; i++)
            {
                if (a[i].accNo == acc)
                {
                    cout << "Enter Withdraw Amount: ";
                    cin >> amt;

                    if (amt <= a[i].balance)
                    {
                        a[i].balance -= amt;
                        cout << "Amount Withdrawn Successfully!\n";
                    }
                    else
                    {
                        cout << "Insufficient Balance!\n";
                    }

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Account not found!\n";
        }
        else if (choice == 5)
        {
            cout << "Exiting Bank System...\n";
            break;
        }
        else
        {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}