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
    int n;
    cin >> n;
    int sum=0,a[n+2],s2=0;
    for(int i=0;i<n;i++)
        cin >> a[i] , sum += a[i];
    int x = ceil(sum/2.0);
    for(int i=0;i<n;i++)
    {
        s2 += a[i];
        if(s2 >= x)
        {
            cout << i+1 << endl;
            return 0;
        }
    }
}
