#include<iostream>
using namespace std;

int main()
{
    int l, h, f;
    cin >> l >> h;

    for(int i = l; i <= h; i++)
    {
        if(i < 2)
            continue;

        f = 0;

        for(int j = 2; j * j <= i; j++)
        {
            if(i % j == 0)
            {
                f = 1;
                break;
            }
        }

        if(f == 0)
            cout << i << " ";
    }

    return 0;
}