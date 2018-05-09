#include<bits/stdc++.h>
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
using namespace std;
ll incree(ll a,ll b)
{
    a++;
    return (a-b)*(a-b);
}
ll decree(ll a,ll b)
{
    a--;
    return (a-b)*(a-b);
}
bool boss(ll t1,ll t2,ll t3,ll t4)
{
    if(t1<=t2 && t1<=t3 && t1<=t4)
        return true;
    else
        return false;
}
int main()
{
    int n,k1,k2;
    cin >> n >> k1 >> k2;
    ll a[n+2],b[n+2];
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
        cin >> b[i];
    while(k1)
    {
        ll mx = -1 , idx;
        for(int i=0;i<n;i++)
        {
            ll temp = (a[i]-b[i])*(a[i]-b[i]);
            if(temp > mx)
            {
                mx = temp;
                idx = i;
            }
        }
        if(mx == -1)
        {
            k1--;
            break;
        }
        ll t1 = incree(a[idx],b[idx]);
        ll t2 = incree(b[idx],a[idx]);
        ll t3 = decree(a[idx],b[idx]);
        ll t4 = decree(b[idx],a[idx]);
        //cout << t4 << endl;
        if(boss(t1,t2,t3,t4))
        {
            a[idx]++;
        }
        else if(boss(t2,t1,t3,t4))
        {
            b[idx]++;
        }
        else if(boss(t3,t1,t2,t4))
        {
            a[idx]--;
        }
        else if(boss(t4,t1,t2,t3))
        {
            b[idx]--;
        }
        k1--;
    }
    while(k2)
    {
        ll mx = -1 , idx;
        for(int i=0;i<n;i++)
        {
            ll temp = (a[i]-b[i])*(a[i]-b[i]);
            if(temp > mx)
            {
                mx = temp;
                idx = i;
            }
        }
        if(mx == -1)
        {
            k2--;
            break;
        }
        ll t1 = incree(a[idx],b[idx]);
        ll t2 = incree(b[idx],a[idx]);
        ll t3 = decree(a[idx],b[idx]);
        ll t4 = decree(b[idx],a[idx]);
        if(boss(t1,t2,t3,t4))
        {
            a[idx]++;
        }
        else if(boss(t2,t1,t3,t4))
        {
            b[idx]++;
        }
        else if(boss(t3,t1,t2,t4))
        {
            a[idx]--;
        }
        else if(boss(t4,t1,t2,t3))
        {
            b[idx]--;
        }
        k2--;
    }
    ll ans = 0;
    for(int i=0;i<n;i++)
    {
        ans += (a[i]-b[i])*(a[i]-b[i]);
    }
    cout << ans << endl;
}
