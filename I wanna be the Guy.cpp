#include<bits/stdc++.h>
using namespace std;
int A[110];
int main()
{
    int n,p[110],q[110],a,b,l=0;
    cin >> n;
    cin >> a;
    for(int i=0;i<a;i++)
    {
        cin >> p[i];
    }
    cin >> b;
    for(int i=0;i<b;i++)
    {
        cin >> q[i];
    }
    for(int i=0;i<b;i++)
    {
        p[a+i] = q[i];
    }
    for(int i=0;i<a+b;i++)
    {
        A[p[i]] = 1;
    }
    for(int i=1;i<=100;i++)
    {
        l += A[i];
    }

    if(l==n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
    return 0;
}

