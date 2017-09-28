#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s2;
    cin >> s >> s2;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] < s2[i])
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << s2 << endl;
    return 0;
}
