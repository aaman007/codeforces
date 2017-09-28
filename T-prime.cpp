#include<bits/stdc++.h>
#define mx 1000000
using namespace std;
long long p[mx];
void sieve()
{
    memset(p,2,sizeof(p));
    p[0] = 0;
    p[1] = 0;
    for(int i=2;i<mx;i++)
    {
        if(p[i])
        for(int j=2;i*j<mx;j++)
            p[i*j] = 0;
    }
}
int main()
{
    sieve();
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin >> t;
    long long x[t+1],sq;
    for(int i=0;i<t;i++)
    {
        cin >> x[i];
    }
    for(int i=0;i<t;i++)
    {
        sq = sqrt(x[i]);
        if(sq*sq==x[i] && p[sq])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
