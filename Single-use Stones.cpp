#include<bits/stdc++.h>
using namespace std;

#define ll          long long
#define FastRead    ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
    FastRead
    ll w,l,a,ans=1e18;
    cin >> w >> l;
    ll cum[w+2] = {0};
    for(int i=1;i<w;i++)
    {
        cin >> a;
        cum[i] += cum[i-1]+a;
    }
    for(int i=l;i<w;i++)
        ans = min(ans,cum[i]-cum[i-l]);
    cout << ans << endl;
}
