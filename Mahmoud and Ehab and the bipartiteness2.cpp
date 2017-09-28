#include<bits/stdc++.h>
#define MAX 100005
#define pair <int,int> pii
#define ll long long
using namespace std;
vector < int > v1[MAX];
int vist[MAX],level[MAX];
ll sz=1;
void dfs(int start)
{
    vist[start] = 1;
    level[start] = 1;
    stack < int > s;
    s.push(start);
    while(!s.empty())
    {
        int h = s.top();
        s.pop();
        for(auto it:v1[h])
        {
            if(!vist[it])
            {
                vist[it] = 1;
                s.push(it);
                level[it] = level[h]+1;
                if(level[it]%2)
                    sz++;
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
        if(level[i]%2==0)
            cnt +=  sz-v1[i].size();
    }
    cout << cnt << endl;
}
