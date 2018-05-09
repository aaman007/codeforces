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
#include<bits/stdc++.h>
using namespace std;
const ll MOD = 1e9+9;
struct pii
{
    ll first,second;
};
bool cmp(pii a,pii b)
{
    if(a.F == b.F)
        return a.S<b.S;
    return a.F < b.F;
}
int main()
{
    FastRead
    int t;
    cin >> t;
    while(t--)
    {
        ll n,m;
        cin >> n >> m;
        pii x[m+2];
        ll sum=0;
        bool f = 0;
        for(int i=0;i<m;i++)
        {
            cin >> x[i].first >> x[i].second;
        }
        sort(x,x+m,cmp);
        for(int i=0;i<m;i++)
        {
            sum += x[i].second;

            if(sum>x[i].first)
            {
                f = 1;
                break;
            }            //cout << sum << endl;
        }
        if(sum <= n && !f)
            cout << "YES\n";
        else
            cout <<"NO\n";
    }
}
