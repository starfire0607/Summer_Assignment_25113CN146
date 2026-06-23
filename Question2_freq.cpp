#include<iostream>
using namespace std;

int main() {
    int a[5], x, c=0;

    for(int i=0;i<5;i++) cin>>a[i];
    cin>>x;

    for(int i=0;i<5;i++)
        if(a[i]==x) c++;

    cout<<"Frequency = "<<c;
}