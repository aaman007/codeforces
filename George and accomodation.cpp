#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cnt=0;
    cin >> t;
    while(t--)
    {
        int p,q;
        cin >> p >> q;
        if(q-p>=2)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
