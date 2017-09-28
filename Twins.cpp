#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1100],bsum=0,sum=0,cnt=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a,a+n);
    sum /= 2;
    for(int i=n-1;i>=0;i--)
    {
        bsum += a[i];
        cnt++;
        if(bsum>sum)
            break;
    }
    cout << cnt << endl;
    return 0;
}
