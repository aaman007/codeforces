#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[110];
    gets(str);
    int len = strlen(str);
    int flag=0;

    for(int i=1;i<len;i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            flag = 1;
            break;
        }
    }

    if(flag==1)
    {
        cout << str << endl;
    }
    else
    {
        for(int i=0;i<len;i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                str[i] += 32;
            }
            else
            {
                str[i] -= 32;
            }
        }

        cout << str << endl;
    }
    return 0;
}

