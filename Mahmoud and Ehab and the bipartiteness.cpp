#include<bits/stdc++.h>
#define MAX 100005
#define pair <int,int> pii
#define ll long long
using namespace std;
vector < int > v1[MAX];
int color[MAX];
ll sz=1;
void dfs(int start)
{
    color[start] = 1;
    stack < int > s;
    s.push(start);
    while(!s.empty())
    {
        int h = s.top();
        s.pop();
        for(auto it:v1[h])
        {
            if(color[h]==1 && !color[it])
            {
               color[it] = -1;
               s.push(it);
            }
            else if(!color[it])
            {
                sz++;
                color[it] = 1;
                s.push(it);
            }
        }
    }
}
int main()
{
    int n,u,v;
    ll cnt=0;
    scanf("%d",&n);
    for(int i=0;i<n-1;i++)
    {
        scanf("%d%d",&u,&v);
        v1[u].push_back(v);
        v1[v].push_back(u);
    }
    dfs(1);
    for(int i=1;i<=n;i++)
    {
        if(color[i]==-1)
            cnt +=  sz-v1[i].size();
    }
    cout << cnt << endl;
}
