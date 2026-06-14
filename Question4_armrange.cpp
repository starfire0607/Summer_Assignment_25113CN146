#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    for (int i = start; i <= end; i++) {
        int temp = i, sum = 0, rem;

        while (temp > 0) {
            rem = temp % 10;
            sum += rem * rem * rem;  // works for 3-digit Armstrong numbers
            temp /= 10;
        }

        if (sum == i) {
            cout << i << " ";
        }
    }

    return 0;
}