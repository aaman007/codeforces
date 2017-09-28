#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,a;
    cin >> n;
    vector < int > v;
    map < int,int > mp;
    for(ll i=0;i<n;i++)
    {
        cin >> a;
        v.push_back(a);
    }
    if(v[0]>25)
    {
        cout << "NO" << endl;
        return 0;
    }
    for(ll i=0;i<n;i++)
    {
        if(v[i]==25)
            mp[25]++;
        else if(v[i]==50)
        {
            if(mp[25]>=1)
                mp[25]--;
            else
            {
                cout << "NO" << endl;
                return 0;
            }
            mp[50]++;
        }
        else if(v[i]==100)
        {
            if(mp[50]>=1 && mp[25]>=1)
            {
                mp[50]--;
                mp[25]--;
            }
            else if(mp[25]>=3)
                mp[25] -= 3;
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}
