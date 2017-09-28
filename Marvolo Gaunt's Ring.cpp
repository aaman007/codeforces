#include<bits/stdc++.h>
#define INF (long long)4e18
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n,p,q,r;
    long long mx = -INF , mx1 = -INF , ans = -INF;

    cin >> n >> p >> q >>r;

    long long a[n+1];

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        mx = max(mx,a[i]*p);
        mx1 = max(mx1,mx+a[i]*q);
        ans = max(ans,mx1+a[i]*r);
    }
    cout << ans << endl;
}
