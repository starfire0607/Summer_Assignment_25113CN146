#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int a[r][c], b[r][c], diff[r][c];

    // Input first matrix
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> a[i][j];

    // Input second matrix
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> b[i][j];

    // Subtract matrices
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            diff[i][j] = a[i][j] - b[i][j];

    cout<<endl;
    // Display result
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            cout << diff[i][j] << " ";
        cout << endl;
    }

    return 0;
}