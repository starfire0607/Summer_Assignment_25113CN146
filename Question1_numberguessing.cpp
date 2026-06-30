#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int secret = rand() % 10 + 1;
    int guess;

    cout << "Guess a number between 1 and 10: ";
    cin >> guess;

    if (guess == secret)
        cout << "Congratulations! You guessed the correct number.";
    else
        cout << "Wrong guess! The correct number was " << secret;

    return 0;
}