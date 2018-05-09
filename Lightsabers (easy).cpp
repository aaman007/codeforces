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
    int n,m;
    cin >> n >> m;
    int col[n+2],k[m+2];
    for(int i=1;i<=n;i++)
        cin >> col[i];
    for(int i=1;i<=m;i++)
        cin >> k[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            vector < int > v[105];
            int cnt = 0;
            for(int kk=i;kk<=j;kk++)
                v[col[kk]].push_back(1);
            for(int kk=1;kk<=m;kk++)
            {
                if(v[kk].size() != k[kk])
                    goto damn;
            }
            cout << "YES\n";
            return 0;
            damn : ;
        }
    }
    cout << "NO\n";
}
