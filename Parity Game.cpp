#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin >> s >> s1;
    int c=0,c1=0;
    for(int i=0; i<s.size(); i++)
        if(s[i] == '1')
            c++;
    for(int i=0; i<s1.size(); i++)
        if(s1[i] == '1')
            c1++;
    if((c+(c&1)) >= c1)
        cout << "YES\n";
    else
        cout << "NO\n";
}
