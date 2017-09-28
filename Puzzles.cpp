#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,mn;
    cin >> n >> m;
    vector < int > v;
    for(int i=0;i<m;i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    mn = v[n-1]-v[0];
    for(int i=1;i<=m-n;i++)
    {
        int d;
        d = v[i+n-1]-v[i];
        mn = min(d,mn);
    }
    cout << mn << endl;
    return 0;
}
