#include<bits/stdc++.h>
using namespace std;
#define ll          long long
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
struct pii
{
    int first , second , idx;
    pii(int f,int s,int i)
    {
        first = f;
        second = s;
        idx = i;
    }
};
struct Compare
{
    bool operator() (pii &a,pii &b)
    {
        if(a.F == b.F)
        {
            if(a.S == b.S)
                return a.idx > b.idx;
            return a.S < b.S;
        }
        return a.F > b.F;
    }
};
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x,y;
        cin >> n >> x >> y;
        priority_queue < pii,vector<pii > , Compare > pq;
        int d,m;
        for(int i=1;i<=n;i++)
        {
            cin >> d >> m;
            if(d<=x && m>=y)
                pq.push(pii(d,m,i));
        }
        if(pq.empty())
            cout << -1 << endl;
        else
            cout << pq.top().idx << endl;
    }
}
