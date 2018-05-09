#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define pii         pair<ll,ll>
#define all(x)      x.begin(),x.end()
#define F           first
#define S           second
#define FastRead    ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
    FastRead
    vector < pii > v1,v2;
    int n,c,d;
    cin >> n >> c >> d;
    int bb,pp;
    char cc;
    while(n--)
    {
        cin >> bb >> pp >> cc;
        if(cc == 'C')
        {
             if(pp<=c)
                v1.push_back(pii(pp,bb));
        }
        else if(cc == 'D')
        {
            if(pp<=d)
                v2.push_back(pii(pp,bb));
        }
    }
    ll ans = 0, mx;
    sort(all(v1));
    sort(all(v2));
    if(v1.size() && v2.size())
    {
        for(int i=0;i<v1.size();i++)
            ans = max(ans,v1[i].second);
        mx = 0;
        for(int i=0;i<v2.size();i++)
            mx = max(mx,v2[i].second);
        ans += mx;
    }
    if(v1.size() > 1)
    {
        mx = v1[0].second;
        int pos = 0;
        for(int i=1;i<v1.size();i++)
        {
            mx = max(mx,v1[i].second);
            while(pos+1 < i && v1[i].F+v1[pos+1].F <= c)
                pos++;
            while(pos >= 0 && v1[i].F+v1[pos].F > c)
                pos--;
            if(pos<0)
                break;
            ans = max(ans,v1[i].S+v1[pos].S);
            v1[i].S = mx;
        }
    }
    if(v2.size() > 1)
    {
        mx = v2[0].second;
        int pos = 0;
        for(int i=1;i<v2.size();i++)
        {
            mx = max(mx,v2[i].second);
            while(pos+1 < i && v2[i].F+v2[pos+1].F <= d)
                pos++;
            while(pos >= 0 && v2[i].F+v2[pos].F > d)
                pos--;
            if(pos<0)
                break;
            ans = max(ans,v2[i].S+v2[pos].S);
            v2[i].S = mx;
        }
    }
    cout << ans << endl;
}

