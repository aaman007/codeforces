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
    string s;
    cin >> s;
    int aa=0,bb=0,cc=0;
    int i = 0;
    while(s[i] == 'a' && i<s.size())
        aa++ , i++;
    while(s[i] == 'b' && i<s.size())
        bb++ , i++;
    while(s[i] == 'c' && i<s.size())
        cc++ , i++;

    if(i == s.size() && aa && bb && cc && (aa == cc || bb == cc))
        cout << "YES\n";
    else
        cout << "NO\n";
}
