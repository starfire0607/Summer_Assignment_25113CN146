#include <iostream>
using namespace std;

struct Book
{
    int id;
    char title[50];
    char author[50];
};

int main()
{
    Book b[100];
    int n = 0;
    int choice;

    while (true)
    {
        cout << "\n--- Library Management System ---";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Book ID: ";
            cin >> b[n].id;

            cout << "Enter Book Title: ";
            cin >> b[n].title;

            cout << "Enter Author Name: ";
            cin >> b[n].author;

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
                    cout << b[i].id << "\t"
                         << b[i].title << "\t"
                         << b[i].author << endl;
                }
            }
        }
        else if (choice == 3)
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