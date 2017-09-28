#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[110],sum=0,cnt=0;
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i=0;i<m;i++)
    {
        if(a[i]>=0)
            break;
        if(cnt<m)
        {
           sum += a[i];
           cnt++;
        }
    }
    cout << abs(sum) << endl;
    return 0;
}
