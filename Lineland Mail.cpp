#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    ll n , mn , mx , idx = -1;
    cin >> n;
    ll a[n+1];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            mn = a[1]-a[0];
            mx = a[n-1]-a[0];
        }
        else if(i==n-1)
        {
            mn = a[n-1]-a[n-2];
            mx = a[n-1]-a[0];
        }
        else
        {
            mn = min(a[i]-a[i-1],a[i+1]-a[i]);
            mx = max(a[n-1]-a[i],a[i]-a[0]);
        }
        cout << mn << " " << mx << endl;
    }
}

