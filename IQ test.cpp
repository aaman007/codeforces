#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,n,m,cnt=0,cnt2=0;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> a;
        if(a%2==0)
        {
            cnt++;
            n = i+1;
        }
        else
        {
            cnt2++;
            m = i+1;
        }
    }
    if(cnt==1)
        cout << n << endl;
    else if(cnt2==1)
        cout << m << endl;
    return 0;
}
