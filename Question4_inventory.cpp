#include <iostream>
using namespace std;

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    Item it[100];
    int n = 0;
    int choice;

    while (true)
    {
        cout << "\n--- Inventory Management System ---";
        cout << "\n1. Add Item";
        cout << "\n2. Display Items";
        cout << "\n3. Search Item";
        cout << "\n4. Update Quantity";
        cout << "\n5. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Item ID: ";
            cin >> it[n].id;

            cout << "Enter Item Name: ";
            cin >> it[n].name;

            cout << "Enter Quantity: ";
            cin >> it[n].quantity;

            cout << "Enter Price: ";
            cin >> it[n].price;

            n++;

            cout << "Item Added Successfully!\n";
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                cout << "No items found!\n";
            }
            else
            {
                cout << "\nID\tName\tQty\tPrice\n";
                for (int i = 0; i < n; i++)
                {
                    cout << it[i].id << "\t"
                         << it[i].name << "\t"
                         << it[i].quantity << "\t"
                         << it[i].price << endl;
                }
            }
        }
        else if (choice == 3)
        {
            int id, found = 0;
            cout << "Enter Item ID to search: ";
            cin >> id;

            for (int i = 0; i < n; i++)
            {
                if (it[i].id == id)
                {
                    cout << "Item Found!\n";
                    cout << "Name: " << it[i].name << endl;
                    cout << "Quantity: " << it[i].quantity << endl;
                    cout << "Price: " << it[i].price << endl;
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Item not found!\n";
        }
        else if (choice == 4)
        {
            int id, found = 0;
            cout << "Enter Item ID to update quantity: ";
            cin >> id;

            for (int i = 0; i < n; i++)
            {
                if (it[i].id == id)
                {
                    cout << "Enter new quantity: ";
                    cin >> it[i].quantity;
                    cout << "Quantity updated successfully!\n";
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Item not found!\n";
        }
        else if (choice == 5)
        {
            cout << "Exiting Inventory System...\n";
            break;
        }
        else
        {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}