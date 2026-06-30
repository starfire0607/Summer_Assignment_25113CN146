#include <iostream>
using namespace std;

int main()
{
    int arr[100], n = 0;
    int choice;

    while (true)
    {
        cout << "\n--- Array Operations System ---";
        cout << "\n1. Insert Element";
        cout << "\n2. Display Array";
        cout << "\n3. Search Element";
        cout << "\n4. Update Element";
        cout << "\n5. Delete Element";
        cout << "\n6. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter element to insert: ";
            cin >> arr[n];
            n++;
            cout << "Element inserted!\n";
        }
        else if (choice == 2)
        {
            if (n == 0)
                cout << "Array is empty!\n";
            else
            {
                cout << "Array elements: ";
                for (int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
            }
        }
        else if (choice == 3)
        {
            int key, found = 0;
            cout << "Enter element to search: ";
            cin >> key;

            for (int i = 0; i < n; i++)
            {
                if (arr[i] == key)
                {
                    cout << "Element found at position " << i + 1 << endl;
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Element not found!\n";
        }
        else if (choice == 4)
        {
            int pos, value;
            cout << "Enter position to update (1 to " << n << "): ";
            cin >> pos;

            if (pos >= 1 && pos <= n)
            {
                cout << "Enter new value: ";
                cin >> arr[pos - 1];
                cout << "Element updated!\n";
            }
            else
            {
                cout << "Invalid position!\n";
            }
        }
        else if (choice == 5)
        {
            int pos;
            cout << "Enter position to delete (1 to " << n << "): ";
            cin >> pos;

            if (pos >= 1 && pos <= n)
            {
                for (int i = pos - 1; i < n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }
                n--;
                cout << "Element deleted!\n";
            }
            else
            {
                cout << "Invalid position!\n";
            }
        }
        else if (choice == 6)
        {
            cout << "Exiting program...\n";
            break;
        }
        else
        {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}