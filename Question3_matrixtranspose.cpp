#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int a[r][c];

    // Input matrix
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> a[i][j];

    // Display transpose
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++)
            cout << a[j][i] << " ";
        cout << endl;
    }

    return 0;
}