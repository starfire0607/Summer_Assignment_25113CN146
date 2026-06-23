#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int freq[256] = {0};

    for (int i = 0; i < str.length(); i++) {
        freq[str[i]]++;
    }

    for (int i = 0; i < str.length(); i++) {
        if (freq[str[i]] == 1) {
            cout << str[i];
            return 0;
        }
    }

    cout << "No non-repeating character found";

    return 0;
}