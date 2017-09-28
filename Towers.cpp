#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1100],mx=0;
    map < int,int > mp;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        if(mp[a[i]]>mx)
            mx = mp[a[i]];
    }
    cout << mx << " " << mp.size() << endl;
    return 0;
}
