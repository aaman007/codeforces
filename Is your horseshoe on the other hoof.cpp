#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,cnt=0;
    map < int,int > mp;
    for(int i=0;i<4;i++)
    {
        cin >> a;
        mp[a]++;
        if(mp[a]>1)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
