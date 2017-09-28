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
    int n,c,cnt=0;
    cin >> n >> c;
    int x[n+1];
    for(int i=0;i<n;i++)
    {
        cin >> x[i];
        if(i && x[i]-x[i-1]<=c)
            cnt++;
        else
            cnt = 1;
    }
    cout << cnt << endl;
}

