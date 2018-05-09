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
    int n,m,t,x;
    cin >> n >> m;
    int a;
    vector < int > v,ans;
    vector < int > :: iterator it;
    for(int i=0;i<n;i++)
        cin >> a , v.push_back(a);
    queue < int > q;
    while(m--)
    {
        cin >> t;
        if(t == 1)
        {
            cin >> x;
            if(v[x-1] == 0)
            {
                q.pop();
                ans.push_back(x);
            }
            else
                v[x-1]--;
        }
        else
        {
            q.push(1);
        }
    }
    while(q.size())
    {
        ans.push_back(1);
        q.pop();
    }
    for(int i=0;i<ans.size();i++)
        cout << ans[i] << endl;
}
