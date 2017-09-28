#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    bool res = false;
    for(int i=0;i<m;i++)
    {
        int k,v;
        cin >> k;
        bool res2 = true;
        map <int,int> mp;
        for(int j=0;j<k;j++)
        {
            cin >> v;
            if(!res)
            {
                mp[v]++;
                if(mp[v]>=1 && mp[-v]>=1)
                    res2 = false;
            }
        }
        if(res2)
            res = true;
    }
    if(res)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
