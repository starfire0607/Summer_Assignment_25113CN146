#include <iostream>
using namespace std;

struct Employee
{
    int id;
    char name[50];
    float basic, hra, da, total;
};

int main()
{
    Employee e;

    cout << "Salary Management System\n";

    cout << "Enter Employee ID: ";
    cin >> e.id;

    cout << "Enter Employee Name: ";
    cin >> e.name;

    cout << "Enter Basic Salary: ";
    cin >> e.basic;

    // Calculate HRA and DA
    e.hra = e.basic * 0.20;   // 20% HRA
    e.da = e.basic * 0.10;    // 10% DA

    e.total = e.basic + e.hra + e.da;

    cout << "\n----- Salary Details -----";
    cout << "\nEmployee ID : " << e.id;
    cout << "\nEmployee Name : " << e.name;
    cout << "\nBasic Salary : " << e.basic;
    cout << "\nHRA : " << e.hra;
    cout << "\nDA : " << e.da;
    cout << "\nTotal Salary : " << e.total;

    return 0;
}