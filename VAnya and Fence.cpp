#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,h,sum=0;
    cin >> n >> h;
    for(int i=0;i<n;i++)
    {
        cin >> a;
        if(a<=h)
            a = 1;
        else
            a = 2;
        sum += a;
    }
    cout << sum << endl;
    return 0;
}


