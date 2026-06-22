#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int original = n, sum = 0, digit;
    int digits = to_string(n).length();

    while (n > 0) {
        digit = n % 10;
        sum += pow(digit, digits);
        n /= 10;
    }

    return sum == original;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num))
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}