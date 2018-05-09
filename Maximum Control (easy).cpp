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
int in[1005];
int main()
{
    int n,u,v,cnt=0;
    cin >> n;
    for(int i=0;i<n-1;i++)
    {
        cin >> u >> v;
        in[u]++;
        in[v]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(in[i] == 1)
            cnt++;
    }
    cout << cnt << endl;
}
