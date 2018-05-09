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
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n,a;
        cin >> n;
        ll sum = 0;
        while(n--)
        {
            cin >> a;
            sum += a;

        }
        cout << sum << endl;
    }
}
