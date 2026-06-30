#include <iostream>
using namespace std;

int main() {
    int balance = 1000, choice, amount;

    cout << "1. Check Balance\n2. Deposit\n3. Withdraw\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Balance = " << balance;
    }
    else if (choice == 2) {
        cout << "Enter deposit amount: ";
        cin >> amount;
        balance += amount;
        cout << "New Balance = " << balance;
    }
    else if (choice == 3) {
        cout << "Enter withdrawal amount: ";
        cin >> amount;
        if (amount <= balance) {
            balance -= amount;
            cout << "New Balance = " << balance;
        }
        else {
            cout << "Insufficient Balance";
        }
    }
    else {
        cout << "Invalid Choice";
    }

    return 0;
}