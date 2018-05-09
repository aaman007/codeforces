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
    int n,t;
    cin >> n;
    int a[n+2];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int mn1 = 1e9 , mn2 = 1e9 , mn3 = 1e9;
    for(int i=0;i<n;i++)
    {
        cin >> t;
        if(t == 3)
            mn3 = min(mn3,a[i]);
        else if(t == 2)
            mn2 = min(mn2,a[i]);
        else
            mn1 = min(mn1,a[i]);
    }
    cout << min(mn1+mn2,mn3) << endl;
}
