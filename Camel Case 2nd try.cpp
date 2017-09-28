#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[110000];
    gets(str);
    int len = strlen(str);
    int cnt=1;

    for(int i=0; i<len; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
