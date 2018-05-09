#include<bits/stdc++.h>
#define FastRead    ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int x,n,a,b,c,t,ans;
int main()
{
    FastRead
    cin >> n >> a >> b >> c >> t;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        ans += a;
        if(c>b)
        {
            ans -= (t-x)*b;
            ans += (t-x)*c;
        }
    }
    cout << ans << endl;
}
