#include<iostream>
using namespace std;

int main() {
    int a[5], max, smax;

    for(int i=0;i<5;i++) cin>>a[i];

    max = smax = a[0];

    for(int i=1;i<5;i++) {
        if(a[i] > max) {
            smax = max;
            max = a[i];
        }
        else if(a[i] > smax && a[i] != max)
            smax = a[i];
    }

    cout << "Second Largest = " << smax;
}