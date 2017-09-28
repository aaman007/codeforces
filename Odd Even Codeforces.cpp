#include<bits/stdc++.h>
using namespace std;
int o[1000];
int e[1000];
int main()
{
    int a,b,i,j,ans=0;
    cin >> a >> b;
    for(i=1;i<a;i++)
    {
        if(i%2 != 0)
        {
            o[i] = i;
            if(i==a)
            {
                ans = o[i];
            }
        }
    }
    for(j=0;i<a;j++)
    {
        if(j%2 == 0)
        {
            e[i] = j;
            if(j==b)
            {
                ans = e[i];
            }
        }
    }
    /**for(i=0,j=0;i<a,j<a;i++,j++)
    {
        if(o[i]==a)
        {
            ans = o[i];
        }
        else if(e[j]==a)
        {
            ans = e[i];
        }
    }**/
    cout << ans << endl;

    return 0;
}


