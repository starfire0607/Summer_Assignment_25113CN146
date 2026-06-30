#include <iostream>
using namespace std;

int main() {
    string names[5];

    for (int i = 0; i < 5; i++)
        cin >> names[i];

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (names[i] > names[j]) {
                string temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }

    cout << "Sorted names:\n";
    for (int i = 0; i < 5; i++)
        cout << names[i] << endl;

    return 0;
}