#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[1100],mx=0,sum=0;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        cin >> a[i];
        if(a[i]>mx)
        {
            mx=a[i];
        }
    }
    for(int i=1;i<=t;i++)
    {
        sum += (mx-a[i]);
    }
    cout << sum << endl;
    return 0;
}

