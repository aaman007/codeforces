#include<bits/stdc++.h>
using namespace std;

#define FastRead    ios_base::sync_with_stdio(false);cin.tie(NULL);

const int MAX = 2e5+5;
vector < int > adj[MAX],ans;
bool vis[MAX];

void dfs(int src)
{
    vis[src] = 1;
    for(auto i : adj[src])
    {
        dfs(i);
        vis[src] ^= vis[i];
    }
}
void solve(int src)
{
    for(auto i : adj[src])
    {
        if(!vis[i])
            solve(i);
    }
    cout << src << endl;
    for(auto i : adj[src])
    {
        if(vis[i])
            solve(i);
    }
}
int main()
{
    FastRead
    int n;
    cin >> n;
    int p , root = 0;
    for(int i=0;i<n;i++)
    {
        cin >> p;
        if(p == 0)
            root = i+1;
        else
            adj[p].push_back(i+1);
    }
    if(n&1)
    {
        cout << "YES\n";
        dfs(root);
        solve(root);
    }
    else
        cout << "NO\n";
}
