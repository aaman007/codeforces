#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int a = atoi(str.c_str());
    int len = str.length(),cnt=0;
    for(int i=0;i<len;i++)
    {
        if(str[i]=='4' || str[i]=='7')
        {
            cnt++;
        }
    }
    if(cnt==len || a%4==0 || a%7==0 || a%47==0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}


