#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    vector<std::string> words = {
        "elephant", "cat", "banana", "dog", "apple", "it", "hippopotamus"
    };

    cout << "Original words:\n";
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    cout << "\n\n";
    sort(words.begin(), words.end(), [](const std::string& a, const std::string& b) {
        if (a.length() != b.length()) {
            return a.length() < b.length();
        }
        return a < b;
    });
    cout << "Words sorted by length (and alphabetically if lengths tie):\n";
    for (const auto& word : words) {
        cout << word << "\n";
    }

    return 0;
}
