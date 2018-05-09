#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define pii         pair<int,int>
#define sf(a)       scanf("%d",&a)
#define pf(a)       printf("%d\n",a)
#define mem(a,b)    memset(a,b,sizeof(a))
#define all(x)      x.begin(),x.end()
#define rall(x)     x.rbegin(),x.rend()
#define pb          push_back
#define F           first
#define S           second
#define Check       cout<< "Done in " << clock() / CLOCKS_PER_SEC <<" sec"<< endl;
#define FastRead    ios_base::sync_with_stdio(false);cin.tie(NULL);
const int MAX = 1e5+5;
ll d[MAX],d1[MAX],d2[MAX];
int main()
{
    FastRead
    int n;
    cin >> n;
    ll a[n+2];
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n-1;i++)
        d[i] = abs(a[i]-a[i+1]);
    for(int i=0;i<n;i++)
    {
        d1[i] = d2[i] = d[i];
        if(i&1)
            d1[i] *= -1;
        else
            d2[i] *= -1;
    }
    ll sum1 = 0 , sum2 = 0 , mx = -1e12;
    for(int i=0;i<n;i++)
    {
        sum1 += d1[i];
        sum2 += d2[i];
        mx = max(mx,max(sum1,sum2));
        if(sum1<0)
            sum1 = 0;
        if(sum2<0)
            sum2 = 0;
    }
    cout << mx << endl;

}
