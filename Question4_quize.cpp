#include <iostream>
using namespace std;

int main() {
    int score = 0, ans;

    cout << "Q1. What is 2 + 2?\n";
    cout << "1. 3\n2. 4\n3. 5\n";
    cin >> ans;
    if (ans == 2)
        score++;

    cout << "Q2. Capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Chennai\n";
    cin >> ans;
    if (ans == 2)
        score++;

    cout << "Your Score = " << score << "/2";

    return 0;
}