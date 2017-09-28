#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int cnt=0,len = str.length();
    for(int i=0;i<len;i++)
    {
        if(str[i]=='4' || str[i]=='7')
            cnt++;
    }
    if(cnt==4 || cnt==7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
