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
int main()
{
    ll x,d;
    cin >> x >> d;
    deque < ll > dd;
    int cnt;
    ll temp,value=1;
    while(x>0)
    {
        int t = 2;
        cnt = 0;
        temp = 1;
        for(int i=1;i<=31;i++)
        {
            t *= 2;
            if(t-1>x)
                break;
            temp = t-1;
            cnt++;
        }
        for(int i=0;i<=cnt;i++)
            dd.push_back(value);
        value += d;
        x -= temp;
    }
    cout << dd.size() << endl;
    for(int i=0;i<dd.size();i++)
    {
        cout << dd[i];
        if(i!=dd.size()-1)
            cout << " ";
    }
    cout << endl;
}
