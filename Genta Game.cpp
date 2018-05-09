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
int v;
void isPalindrome(string s)
{
    int len = s.size();
    for(int i=0;i<len/2;i++)
    {
        if(s[i] != s[len-i-1])
            v++;
    }
}
int main()
{
    FastRead
    int t;
    cin >> t;
    while(t--)
    {
        ll n,m,cnt=0;
        v = 0;
        cin >> n >> m;
        string s;
        cin >> s;
        int idx;
        char c;
        isPalindrome(s);
        int len = s.size();
        int  cr = -1;
        if(len&1)
            cr = len/2;
        for(int i=1;i<=m;i++)
        {
            cin >> idx >> c;
            int xx = len/2;
            if(idx-1 == cr)
            {

            }
            else
            {
                if(!v)
                {
                    if(s[idx-1] != c)
                        v++;
                }
                else
                {
                    if(s[idx-1] != s[len-idx])
                    {
                        if(s[len-idx] == c)
                             v--;
                    }
                    else if(s[idx-1] != c)
                        v++;
                }
                s[idx-1] = c;
            }
            if(v == 0)
                cnt++;
        }
        cout << cnt << endl;
    }
}
