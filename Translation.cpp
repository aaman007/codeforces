#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[110],str2[110];
    int flag=1;
    gets(str1);
    strrev(str1);
    gets(str2);
    int len = strlen(str2);
    if(strlen(str1) != strlen(str2))
    {
        cout << "NO" << endl;
    }
    else
    {
        for(int i=0 ; i<len ; i++)
        {
            if(str2[i] != str1[i])
            {
                flag = 0;
                break;
            }
        }
    if(flag==1) cout << "YES" << endl;
    else if(flag==0) cout << "NO" << endl;
    }

    return 0;
}
