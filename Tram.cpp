#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,sum=0,mx=0;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> a >> b;
        sum -= a;
        sum += b;
        if(sum>mx)
        {
            mx = sum;
        }
    }
    cout << mx << endl;
    return 0;
}

