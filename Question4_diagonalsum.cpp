#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    int a[n][n];

    // Input matrix
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    // Calculate diagonal sum
    for(int i = 0; i < n; i++)
        sum += a[i][i];

    cout << "Diagonal Sum = " << sum;

    return 0;
}