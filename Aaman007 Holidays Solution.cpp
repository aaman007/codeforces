#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,off,m;
    cin >> n;

    m = n/7;
    off = m*2;
    n = n%7;

    int mx,mn;
    if(n >= 2)
    {
        mx = off + 2;
    }
    else if( n == 1)
    {
        mx = off + 1;
    }
    else
    {
        mx = off;
    }


    if(n==6)
    {
        mn = off + 1;
    }
    else
    {
        mn = off;
    }
    cout << mn << " " << mx << endl;

    return 0;
}

