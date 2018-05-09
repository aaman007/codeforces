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
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a+c > b+d)
            cout << 1 << endl;
        else if(a+c < b+d)
            cout << 2 << endl;
        else
        {
            if(c > b)
                cout << 1 << endl;
            else if(c < b)
                cout << 2 << endl;
            else
                cout << -1 << endl;
        }
    }
}
