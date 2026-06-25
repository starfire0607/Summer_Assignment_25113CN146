#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, result = "";

    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ')
            result += str[i];
    }

    cout << result;

    return 0;
}