#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cnt=0;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        string str;
        cin >> str;
        if(str[0]=='T')
            cnt += 4;
        else if(str[0]=='C')
            cnt += 6;
        else if(str[0]=='O')
            cnt += 8;
        else if(str[0]=='D')
            cnt += 12;
        else if(str[0]=='I')
            cnt += 20;
    }
    cout << cnt << endl;
    return 0;
}
