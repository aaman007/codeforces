#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mx=0;
    cin >> n;
    string s[n+1];
    for(int i=0;i<n;i++)
        cin >> s[i];
    for(int i=0;i<7;i++)
    {
       int cnt = 0;
       for(int j=0;j<n;j++)
       {
           if(s[j][i]=='1')
            cnt++;
       }
       mx = max(mx,cnt);
    }
    cout << mx << endl;
}
