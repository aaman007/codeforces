#include<bits/stdc++.h>
using namespace std;
int main()
{
    map < char,int > mp;
    string s;
    int k,cnt=0;
    cin >> s >> k;
    int len = s.length();
    for(int i=0;i<len;i++)
    {
        if(!mp[s[i]])
            cnt++;
        mp[s[i]]++;
    }
    if(k <= len && k>=cnt)
        cout << k-cnt << endl;
    else if(k<=len)
        cout << 0 << endl;
    else
        cout << "impossible\n";
}
