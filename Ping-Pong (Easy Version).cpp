#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define sf(a) scanf("%d",&a)
#define pf(a) printf("%d\n",a)
#define mem(a,b) memset(a,b,sizeof(a))
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define F first
#define S second
#define Check cout<< "Done in " << clock() / CLOCKS_PER_SEC <<" sec"<< endl;
#define FastRead ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
vector < pii > adj;
bool vis[105];
void dfs(int src)
{
    pii x = adj[src];
    //cout << src << endl;
    vis[src] = 1;
    for(int i=0;i<adj.size();i++)
    {
        pii y = adj[i];
        if(vis[i])
            continue;
        //cout << x.F << " " << x.S << " ";
        //cout << y.F << " " << y.S << "\n";
        if(x.F>y.F && x.F<y.S)
            dfs(i);
        else if(x.S>y.F && x.S<y.S)
            dfs(i);
    }
}
int main()
{
    int n;
    cin >> n;
    int m,x,y;
    while(n--)
    {
        cin >> m >> x >> y;
        if(m == 1)
            adj.push_back(pii(x,y));
        else
        {
            mem(vis,0);
            dfs(x-1);
            if(vis[y-1])
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}
