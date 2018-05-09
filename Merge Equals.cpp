#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define pii         pair<ll,ll>
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
bool cmp(pii a,pii b)
{
    if(a.F == b.F)
        return a.S > b.S;
    return a.F > b.F;
}
struct Compare
{
    bool operator() (pii &a,pii &b)
    {
        if(a.F == b.F)
            return a.S > b.S;
        return a.F > b.F;
    }
};
int main()
{
    FastRead
    ll n,a;
    cin >> n;
    priority_queue< pii,vector<pii>,Compare > pq,ans;
    for(int i=0;i<n;i++)
    {
        cin >> a;
        pq.push(pii(a,i));
    }
    while(pq.size()>1)
    {
        pii x = pq.top();
        pq.pop();
        pii y = pq.top();
        if(x.F == y.F)
        {
            pq.pop();
            pq.push(pii(2*y.F,y.S));
        }
        else
            ans.push(pii(x.S,x.F));
    }
    while(pq.size())
    {
        pii x = pq.top();
        ans.push(pii(x.S,x.F));
        pq.pop();
    }
    cout << ans.size() << endl;
    while(ans.size())
    {
        ll x = ans.top().second;
        ans.pop();
        cout << x << " ";
    }
    cout << endl;
}
