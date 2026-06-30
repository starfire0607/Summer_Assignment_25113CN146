#include <iostream>
using namespace std;

struct Ticket
{
    int ticketNo;
    char name[50];
    char destination[50];
    int seats;
};

int main()
{
    Ticket t[100];
    int n = 0;
    int choice;

    while (true)
    {
        cout << "\n--- Ticket Booking System ---";
        cout << "\n1. Book Ticket";
        cout << "\n2. View Bookings";
        cout << "\n3. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Ticket Number: ";
            cin >> t[n].ticketNo;

            cout << "Enter Passenger Name: ";
            cin >> t[n].name;

            cout << "Enter Destination: ";
            cin >> t[n].destination;

            cout << "Enter Number of Seats: ";
            cin >> t[n].seats;

            n++;

            cout << "Ticket Booked Successfully!\n";
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                cout << "No bookings found!\n";
            }
            else
            {
                cout << "\nTicketNo\tName\tDestination\tSeats\n";
                for (int i = 0; i < n; i++)
                {
                    cout << t[i].ticketNo << "\t\t"
                         << t[i].name << "\t"
                         << t[i].destination << "\t"
                         << t[i].seats << endl;
                }
            }
        }
        else if (choice == 3)
        {
            cout << "Exiting Ticket System...\n";
            break;
        }
        else
        {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}