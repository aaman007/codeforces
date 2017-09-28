#include<bits/stdc++.h>
#define ll long long int
ll A[1001000];
using namespace std;
int main()
{
    ll t,a,mx=0,cnt=0;
    cin >> t;
    for(ll i=0;i<2*t;i++)
    {
        cin >> a;
        A[a]++;
        if(A[a]==2)
            cnt--;
        else
            cnt++;
        mx = max(mx,cnt);

    }
    cout << mx << endl;
    return 0;
}

