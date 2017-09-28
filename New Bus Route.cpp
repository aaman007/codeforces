#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,a,b,m=0,mn=INT_MAX;
    cin >> k;
    map < int,int > mp;
    vector < int > v;
    for(int i=0;i<k;i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=1;i<k;i++)
    {
        b = abs(v[i]-v[i-1]);
        mn = min(mn,b);
        mp[b]++;

    }
    cout << mn << " " << mp[mn] << endl;
    return 0;
}
