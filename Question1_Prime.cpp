#include<iostream>
using namespace std;
int main()
{
    int n,f=0;
    cin>>n;
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            f++;
            break;
        }
    }
    if(f==0)
    {
        cout<<"Prime";
    }
    else 
    {
        cout<<"Not Prime";
    }
    return 0;
}