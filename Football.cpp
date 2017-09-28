#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[110];
    gets(str);
    int cnt=1,flag=0;

    for(int i=0;i<strlen(str);i++)
    {
        if(str[i] == str[i+1])
        {
            cnt++;
        }
        else
        {
            cnt =1;
        }

        if(cnt==7)
        {
            flag = 1;
            cout << "YES" << endl;
            break;
        }
    }
    if(flag==0)
    {
        cout << "NO" << endl;
    }
    return 0;
}
