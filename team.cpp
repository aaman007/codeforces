#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,p,v,t;
    int cnt = 0;
    cin >> tc;
    for(int i=0;i<tc;i++)
    {
        cin >> p >> v >> t;
        if((p+v)==2 || (p+t)==2 || (v+t)==2)
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}

