#include<bits/stdc++.h>
using namespace std;
int dp[4][4005],a[5],n;
int palin(string s)
{
    int len = s.size();
    for(int i=0;i<len/2;i++)
    {
        if(s[i]!=s[len-i-1])
            return 0;
    }
    return 1;
}
int main()
{
    string s;
    cin >> s;
    if(palin(s))
    {
        cout << "YES\n";
        return 0;
    }
    int i = s.size()-1;
    while(s[i]=='0' && i>=0)
        s.erase(i,1),i--;
    if(palin(s))
        cout << "YES\n";
    else
        cout << "NO\n";
}

