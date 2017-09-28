#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n,i;
    cin >> n;
    if(n%2==0)
    {
        for(i=0;i<n/2;i++)
        {
            cout << 1;
        }
    }
    else
    {
        cout << 7;
        n -= 3;
        for(int i=0;i<n/2;i++)
        {
            cout << 1;
        }
    }
    cout << endl;
    return 0;
}

