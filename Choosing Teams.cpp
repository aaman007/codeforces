#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a,x,cnt=0;
    cin >> n >> k;
    for(int i=0;i<n;i++)
    {
        cin >> a;
        x = a+k;
        if(x<=5)
           cnt++;
    }
    cout << cnt/3 << endl;
    return 0;
}
