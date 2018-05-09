#include<bits/stdc++.h>
using namespace std;

#define ll          long long
#define fun(m)      ((i-1)*m*k)
#define FastRead    ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
    FastRead
    ll n,k,m,d,Max=0;
    cin >> n >> k >> m >> d;
    for(ll i=1;i<=d;i++)
    {
        ll st = 1 , en = m , best = 0;
        while(st <= en)
        {
            ll mid = (st+en)>>1;
            if(fun(1.0*mid)+mid <= n)
            {
                st = mid+1;
                best = mid;
            }
            else
                en = mid-1;
        }
        Max = max(Max,best*i);
    }
    cout << Max << endl;
}
