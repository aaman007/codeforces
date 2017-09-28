#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,cnt=1,mx=0;
    cin >> n;
    ll a[199999];
    for(ll i=0;i<n;i++)
        cin >> a[i];
    for(ll i=0;i<n;i++)
    {
        if(a[i+1]>a[i])
            cnt++;
        else
            cnt = 1;
        if(cnt>mx)
            mx=cnt;
    }
    cout << mx << endl;
    return 0;
}
