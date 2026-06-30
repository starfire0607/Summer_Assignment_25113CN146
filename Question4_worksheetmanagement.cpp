#include <iostream>
using namespace std;

int main()
{
    char name[50];
    int roll;
    float m1, m2, m3, total, percentage;

    cout << "Marksheet Generation System\n";

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Marks of Subject 1: ";
    cin >> m1;

    cout << "Enter Marks of Subject 2: ";
    cin >> m2;

    cout << "Enter Marks of Subject 3: ";
    cin >> m3;

    total = m1 + m2 + m3;
    percentage = total / 3;

    cout << "\n------ MARKSHEET ------";
    cout << "\nRoll Number : " << roll;
    cout << "\nStudent Name : " << name;
    cout << "\nSubject 1 : " << m1;
    cout << "\nSubject 2 : " << m2;
    cout << "\nSubject 3 : " << m3;
    cout << "\nTotal Marks : " << total;
    cout << "\nPercentage : " << percentage << "%";

    if (percentage >= 90)
        cout << "\nGrade : A+";
    else if (percentage >= 75)
        cout << "\nGrade : A";
    else if (percentage >= 60)
        cout << "\nGrade : B";
    else if (percentage >= 40)
        cout << "\nGrade : C";
    else
        cout << "\nGrade : Fail";

    return 0;
}