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
const ll MAX = 2000000005;
vector < string > sq;
string toString(ll n)
{
    string s = "";
    while(n)
    {
        s += (n%10)+'0';
        n /= 10;
    }
    reverse(all(s));

    return s;
}
void run()
{
    for(int i=1;; i++)
    {
        if((1LL*i*i) > MAX)
            break;
        sq.push_back(toString(1LL*i*i));
    }
}
int main()
{
    FastRead
    run();
    string s;
    cin >> s;
    ll mn = 1e12;
    for(int i=0; i<sq.size(); i++)
    {
        int j = 0;
        if(sq[i].size() > s.size())
            break;
        for(int k=0; k<s.size(); k++)
        {
            if(sq[i][j] == s[k])
                j++;
            if(j == sq[i].size())
                break;
        }
        if(j == sq[i].size())
            mn = min(mn,1LL*(s.size()-sq[i].size()));
    }
    if(mn == 1e12)
        mn = -1;
    cout << mn << endl;
}
