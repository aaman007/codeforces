#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,cnt=0,i,cnt2=0;
    cin >> a >> b;
    for(i=0; ;i++)
    {
        if((a<1 && b<=1) || (a<=1 && b<1))
            break;
        if(a!=0 && b!=0)
        {
            cnt++;
            a--;
            b--;
        }
        else if(a>=2)
        {
            cnt2++;
            a -= 2;
        }
        else if(b>=2)
        {
            cnt2++;
            b -= 2;
        }
    }
    cout << cnt << " " << cnt2 << endl;
    return 0;
}

