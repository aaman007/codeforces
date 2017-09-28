#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n,pos=0;
    cin >> n;

    int a[n+1];

    map < int,int > mp,flag;

    /// Input and Calculating Frequency of each number ///
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    /// Getting elements that weren't used in ai...an ///
    vector < int > v;
    for(int i=1;i<=n;i++)
    {
        if(!mp[i])
            v.push_back(i);
    }
    //cout << mp[2] << endl;
    /// Changing elements that were repeated ///
    for(int i=0;i<n;i++)
    {
        if(pos==v.size())
            break;
        else if(mp[a[i]]==1)
            continue;
        else if((pos<v.size() && a[i]>v[pos]) || flag[a[i]]==1)
        {
            mp[a[i]]--;
            a[i] = v[pos];
            //cout << mp[a[i]] << endl;
            pos++;
        }
        else
            flag[a[i]] = 1;
    }

    /// OUTPUT ///
    cout << v.size() << endl;
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    cout << endl;
}

