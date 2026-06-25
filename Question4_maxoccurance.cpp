#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int freq[256] = {0};

    for (int i = 0; i < s.length(); i++) {
        freq[s[i]]++;
    }

    char maxChar = s[0];
    int maxCount = 0;

    for (int i = 0; i < s.length(); i++) {
        if (freq[s[i]] > maxCount) {
            maxCount = freq[s[i]];
            maxChar = s[i];
        }
    }

    cout << "Maximum occurring character: " << maxChar;

    return 0;
}