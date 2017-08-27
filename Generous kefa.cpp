#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,mx=-1;
    string s;
    map <char,int> mp;
    cin >> k >> n >> s;
    int len = s.length();
    for(int i=0;i<len;i++)
    {
        mp[s[i]]++;
        mx = max(mp[s[i]],mx);
    }
    if(mx<=n)
        cout << "YES\n";
    else
        cout << "NO\n";
}
