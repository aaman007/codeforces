#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,time=240,cnt=0,sum=0;
    cin >> n >> k;
    time -= k;
    for(int i=1;i<=n;i++)
    {
       sum += 5*i;
       if(sum>time)
           break;
       cnt++;
    }
    cout << cnt << endl;
    return 0;

}
