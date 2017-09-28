#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,b=-1,cnt=0,y=0;
    cin >> n >> x;
    int a[n+1],d[105];
    memset(d,0,sizeof(d));
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        d[a[i]] = 1;
    }
    for(int i=0;i<=x;i++)
    {
        if(i==x)
        {
            if(d[i])
                cnt++;
            break;
        }
        else if(!d[i])
            cnt++;
    }
    cout << cnt << endl;
}
