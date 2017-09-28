#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,mx;
    cin >> n >> l;
    int a[n+1];
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    mx = max(a[0],l-a[n-1])*2;
    for(int i=0;i<n-1;i++)
    {
        mx = max(mx,a[i+1]-a[i]);
    }
    printf("%.10lf\n",mx/2.00);
}
