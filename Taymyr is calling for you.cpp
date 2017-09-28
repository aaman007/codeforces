#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,z,cnt=0;
    cin >> n >> m >> z;

    for(int i=n;i<=z;i+=n)
    {
        if(i%m==0)
            cnt++;
    }
    cout << cnt << endl;

    return 0;
}
