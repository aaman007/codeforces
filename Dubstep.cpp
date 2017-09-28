#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,ans;
    cin >> str;
    int flag=0,len = str.length();
    for(int i=0;i<len;)
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
        {
            if(flag==1)
            {
                ans += " ";
                flag = 0;
            }
            else
            {
                i += 3;
            }
        }
        else
        {
            ans += str[i];
            i++;
            flag = 1;
        }
    }
    cout << ans << endl;
    return 0;
}
