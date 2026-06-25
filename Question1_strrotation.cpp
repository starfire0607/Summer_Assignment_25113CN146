#include <iostream>
using namespace std;

int main() {
    string s1, s2;

    cin >> s1 >> s2;

    if (s1.length() == s2.length() && (s1 + s1).find(s2) != string::npos)
        cout << "Rotation";
    else
        cout << "Not Rotation";

    return 0;
}