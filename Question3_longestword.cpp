#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str, word, longest = "";

    getline(cin, str);

    stringstream ss(str);

    while (ss >> word) {
        if (word.length() > longest.length())
            longest = word;
    }

    cout << "Longest word: " << longest;

    return 0;
}