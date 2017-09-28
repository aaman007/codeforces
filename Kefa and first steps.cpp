#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,cnt,mx=0;
    cin >> n;
    vector < int > vec;
    for(int i=0;i<n;i++)
    {
        cin >> a;
        vec.push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        cnt = 1;
        for(int j=i+1;j<n;j++)
        {
            if(vec[i]<=vec[j])
            {
                cnt++;
                i++;
            }
            else
                break;
        }
        if(cnt>mx)
            mx = cnt;
    }
    cout << mx << endl;
    return 0;
}


