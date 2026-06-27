#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int len = 0;
    for (char ch : str)
        len++;

    cout << "Length = " << len;

    return 0;
}