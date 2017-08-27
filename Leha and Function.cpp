#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
bool rcmp(pii a,pii b)
{
    return a.second>b.second;
}
bool cmp(pii a,pii b)
{
    return a.second<b.second;
}
int main()
{
    int m;
    cin >> m;
    map < int,int > mp;
    vector < pii > v,v2;
    int a,b,x[m+1];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a);
        v.push_back(pii(i,a));
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b);
        v2.push_back(pii(i,b));
    }
    sort(v2.begin(),v2.end(),rcmp);
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<m;i++)
    {
        x[v2[i].first] = v[i].second;
    }
    //sort(d,d+m,greater<int>());
    for(int i=0;i<m;i++)
        cout << x[i] << " ";
    cout << endl;
}
