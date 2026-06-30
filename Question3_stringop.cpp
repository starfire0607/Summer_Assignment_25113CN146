#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[100], str2[100];
    int choice;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    while (true)
    {
        cout << "\n--- String Operations System ---";
        cout << "\n1. Length of String";
        cout << "\n2. Reverse String";
        cout << "\n3. Copy String";
        cout << "\n4. Compare Strings";
        cout << "\n5. Concatenate Strings";
        cout << "\n6. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Length of first string: " << strlen(str1) << endl;
        }
        else if (choice == 2)
        {
            char temp[100];
            strcpy(temp, str1);
            strrev(temp);   // may not work in some compilers
            cout << "Reversed string: " << temp << endl;
        }
        else if (choice == 3)
        {
            char copyStr[100];
            strcpy(copyStr, str1);
            cout << "Copied string: " << copyStr << endl;
        }
        else if (choice == 4)
        {
            if (strcmp(str1, str2) == 0)
                cout << "Strings are equal\n";
            else
                cout << "Strings are not equal\n";
        }
        else if (choice == 5)
        {
            char concat[200];
            strcpy(concat, str1);
            strcat(concat, str2);
            cout << "Concatenated string: " << concat << endl;
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