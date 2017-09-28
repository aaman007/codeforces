#include<bits/stdc++.h>
#define str string
using namespace std;
int main()
{
    string s,p,z;
    cin >> s >> p;
    int ans;
    for(int i=0;i<s.length();i++)
    {
        for(char ch='a';ch<=s[i];ch++)
        {
            if(min(s[i],ch)==p[i])
            {
                z += ch;
                ans = 1;
                break;
            }
            else
                ans = 0;
        }
        if(!ans)
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << z << endl;

    return 0;
}

