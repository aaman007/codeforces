#include<bits/stdc++.h>
#define ll          long long
#define pii         pair<int,int>
#define sf(a)       scanf("%d",&a)
#define pf(a)       printf("%d\n",a)
#define mem(a,b)    memset(a,b,sizeof(a))
#define all(x)      x.begin(),x.end()
#define rall(x)     x.rbegin(),x.rend()
#define pb          push_back
#define F           first
#define S           second
#define Check       cout<< "Done in " << clock() / CLOCKS_PER_SEC <<" sec"<< endl;
#define FastRead    ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    int n,a,b,c;
    cin >> n;
    string s,temp;
    double x[n+2];
    map < double , int > mp;
    for(int i=0;i<n;i++)
    {
        cin >> s;
        temp = "";
        int idx = 1;
        while(s[idx] != '+')
            temp += s[idx] , idx++;
        stringstream ss(temp);
        ss >> a;
        temp = "",idx++;
        while(s[idx] != ')')
            temp += s[idx] , idx++;
        stringstream ss1(temp);
        ss1 >> b;

        idx+=2 , temp = "";
        while(idx<s.size())
            temp += s[idx] , idx++;
        stringstream ss2(temp);
        ss2 >> c;
        x[i] = (a+b)/(1.0*c);
        mp[x[i]]++;
    }
    for(int i=0;i<n;i++)
        cout << mp[x[i]] << " ";
    cout << endl;
}
