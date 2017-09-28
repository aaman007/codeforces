#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=-1,y=-1;
    cin >> n;
    int a;
    map < int,int > mp;
    for(int i=0;i<n;i++)
    {
        cin >> a;
        mp[a]++;
        if(x == -1)
            x = a;
        else if(a!=x)
            y = a;
    }
    if(mp.size()!=2 || mp[x]!=mp[y])
        cout << "NO\n";
    else
    {
        cout << "YES\n";
        cout << x <<" " << y << endl;
    }

}
