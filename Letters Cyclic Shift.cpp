#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int cnt=0,len = str.length();
    for(int i=0;i<len;i++)
    {
        if(str[i]=='a')
        {
            cnt++;
            continue;
        }
        if(str[i]!='a' && str[i+1]=='a'){
            str[i]--;
            break;
        }
        else
            str[i]--;
    }
    if(cnt==len)
        str[len-1]='z';
    cout << str << endl;
    return 0;
}

