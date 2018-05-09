#include<bits/stdc++.h>
using namespace std;

#define ll          long long
#define FastRead    ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
    FastRead
    int w,l;
    cin >> w >> l;
    int a[w+l] , b[w+l];
    for(int i=1;i<w;i++)
    {
        cin >> a[i];
        if(i<=l)
        {
            b[i] = a[i];
            a[i] = 0;
        }
        else
            b[i] = 0;
    }
    int idx = 1 , mn;
    for(int i=l+1;i<w;i++)
    {
        while(i-idx > l)
            idx++;
        while(a[i]>0 && idx<i)
        {
            mn = min(a[i],b[idx]);
            b[idx] -= mn;
            b[i] += mn;
            a[i] -= mn;
            if(b[idx]<=0)
                idx++;
            else
                break;
        }
    }
    int sum = 0;
    idx = w-l;
    while(idx<w)
        sum += b[idx] , idx++;
    cout << sum << endl;
}
