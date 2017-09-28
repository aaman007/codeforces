#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t,s,x,res,res2;
    cin >> t >> s >> x;
    res = t+s;
    res2 = x-res;
    if(t==x || res==x)
    {
        cout << "YES" << endl;
        return 0;
    }
    else if(res>x)
    {
        cout << "NO" << endl;
        return 0;
    }
    if(res2%s==0 || res2%s==1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
