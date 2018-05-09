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
int main()
{
    int n,p,a;
    cin >> n >> p;
    ll mx = 0 ,cum[n+2] = {0};
    for(int i=1;i<=n;i++)
    {
        cin >> a;
        cum[i] = cum[i-1]+a;
    }
    for(int i=1;i<=n;i++)
        mx = max(mx,(cum[i]%p)+(cum[n]-cum[i])%p);
    cout << mx << endl;
}
