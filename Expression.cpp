#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,mx=0,mx2=0,mx3=0;
    cin >> a >> b >> c;
    int d = a+(b*c);
    int e = a*(b+c);
    int f = a*b*c;
    int g = (a+b)*c;
    int h = a+b+c;
    if(d > e)
    {
        mx = d;
    }
    else
    {
        mx = e;
    }

    if(f > g)
    {
        mx2 = f;
    }
    else
    {
        mx2 = g;
    }

    if(mx > mx2)
    {
        mx3 = mx;
    }
    else
    {
        mx3 = mx2;
    }

    if(mx3 > h)
    {
        cout << mx3 << endl;
    }
    else

    {
        cout << h << endl;
    }


    return 0;
}
