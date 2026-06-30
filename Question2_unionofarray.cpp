#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};

    int n1 = 4, n2 = 4;

    // Print all elements of first array
    for (int i = 0; i < n1; i++) {
        cout << arr1[i] << " ";
    }

    // Print only unique elements from second array
    for (int i = 0; i < n2; i++) {
        bool found = false;

        for (int j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                found = true;
                break;
            }
        }

        if (!found)
            cout << arr2[i] << " ";
    }

    return 0;
}