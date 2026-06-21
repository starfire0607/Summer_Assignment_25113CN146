#include<iostream>
using namespace std;

int main() {
    int a[]={10,20,30,40,50}, x=30;

    for(int i=0;i<5;i++)
        if(a[i]==x){
            cout<<"Found";
            return 0;
        }

    cout<<"Not Found";
}