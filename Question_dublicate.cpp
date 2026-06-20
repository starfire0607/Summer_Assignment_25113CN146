#include<iostream>
using namespace std;

int main() {
    int a[5];

    for(int i=0;i<5;i++) cin>>a[i];

    cout<<"Duplicates: ";
    for(int i=0;i<5;i++)
        for(int j=i+1;j<5;j++)
            if(a[i]==a[j])
                cout<<a[i]<<" ";
}