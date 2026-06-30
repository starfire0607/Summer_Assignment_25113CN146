#include <iostream>
using namespace std;

int main()
{
    int id[100], n = 0;
    string title[100];
    string author[100];
    int choice;

    while (true)
    {
        cout << "\n--- Mini Library System ---";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Book ID: ";
            cin >> id[n];

            cout << "Enter Book Title: ";
            cin >> title[n];

            cout << "Enter Author Name: ";
            cin >> author[n];

            n++;

            cout << "Book Added Successfully!\n";
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                cout << "No books found!\n";
            }
            else
            {
                cout << "\nID\tTitle\tAuthor\n";
                for (int i = 0; i < n; i++)
                {
                    cout << id[i] << "\t"
                         << title[i] << "\t"
                         << author[i] << endl;
                }
            }
        }
        else if (choice == 3)
        {
            int searchId, found = 0;
            cout << "Enter Book ID to search: ";
            cin >> searchId;

            for (int i = 0; i < n; i++)
            {
                if (id[i] == searchId)
                {
                    cout << "Book Found!\n";
                    cout << "ID: " << id[i] << endl;
                    cout << "Title: " << title[i] << endl;
                    cout << "Author: " << author[i] << endl;
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Book not found!\n";
        }
        else if (choice == 4)
        {
            cout << "Exiting Library System...\n";
            break;
        }
        else
        {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}