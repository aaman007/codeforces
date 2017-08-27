#include<bits/stdc++.h>
using namespace std;
int const MAX = 100005;
typedef pair<int,int> pii;
vector < int> adj[MAX];
int  visited[MAX] , flag[MAX];
double level[MAX] , dp[MAX];
void DFS(int v, int parent)
{
    int cnt = 0;
    dp[v] = 0;
    for(int u : adj[v])
    {
        if(u==parent)
            continue;
        DFS(u,v);
        dp[v] += dp[u];
        cnt++;
    }
    if(cnt==0)
        return;
    dp[v] /= cnt;
    dp[v]++;
}
int main()
{
    int n,u,v;
    cin >> n;
    for(int i=0;i<n-1;i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    DFS(1,-1);
    printf("%.15lf\n",dp[1]);
    return 0;
}
