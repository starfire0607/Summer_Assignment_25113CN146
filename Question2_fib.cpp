#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";

    int a = 0, b = 1, c;

    if (n == 0) {
        cout << a;
    } else if (n == 1) {
        cout << b;
    } else {
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        cout << b;

    }
    }
    return 0;
}