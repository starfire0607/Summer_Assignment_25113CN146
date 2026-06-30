#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 2, 5};
    int n = 7;

    int maxFreq = 0, element;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > maxFreq) {
            maxFreq = count;
            element = arr[i];
        }
    }

    cout << "Element with maximum frequency: " << element << endl;
    cout << "Frequency: " << maxFreq;

    return 0;
}