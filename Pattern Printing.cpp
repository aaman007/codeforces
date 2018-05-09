#include<bits/stdc++.h>
using namespace std;

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
ll MOD = 1e9+7;
ll fact(ll n)
{
    if(n <= 2)
        return max(1LL,n);
    return ((n%MOD)*(fact(n-1)%MOD))%MOD;
}
int main()
{
    FastRead
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n;
        cin >> n;
        int len = s.size();
        int cnt = 0;
        ll ans = 0;
        map < int ,int > mp;
        for(int i=0;i<len;i++)
        {
            if(s[i] == '0' || mp[s[i]])
                cnt++;
            //cout << cnt << endl;
            mp[s[i]] = 1;
        }
        //cout << cnt << endl;
        ans = fact(len);
        ans /= (fact(cnt)*fact(cnt));
        if(ans == 0)
            ans = 1;
        cout << ans << endl;
    }
}
