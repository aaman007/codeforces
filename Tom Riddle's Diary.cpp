#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin >> n;
    map < string,int > mp;
    for(int i=0;i<n;i++)
    {
        cin >> s;
        if(mp.count(s) ? cout << "YES\n" : cout << "NO\n");
        mp[s] = 1;
    }
}
