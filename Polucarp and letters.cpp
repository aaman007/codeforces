#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mx=0;
    string s;
    cin >> n >> s;
    for(int i=0;i<n;i++)
    {
        set<char>st;
        int t=i;
        while(s[t]>='a' && s[t]<='z' && t<n)
        {
            st.insert(s[t]);
            t++;
        }
        int x = st.size();
        //cout << x << endl;
        mx = max(mx,x);
    }
    cout << mx << endl;
}
