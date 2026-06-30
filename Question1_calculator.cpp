#include <iostream>
using namespace std;

int main()
{
    int choice;
    float a, b;

    while (true)
    {
        cout << "\n--- Menu Driven Calculator ---";
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 5)
        {
            cout << "Exiting Calculator...\n";
            break;
        }

        cout << "Enter two numbers: ";
        cin >> a >> b;

        switch (choice)
        {
        case 1:
            cout << "Result: " << (a + b) << endl;
            break;

        case 2:
            cout << "Result: " << (a - b) << endl;
            break;

        case 3:
            cout << "Result: " << (a * b) << endl;
            break;

        case 4:
            if (b != 0)
                cout << "Result: " << (a / b) << endl;
            else
                cout << "Error: Division by zero!\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}