#include<bits/stdc++.h>
using namespace std;

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
int main()
{
    string s;
    cin >> s;
    bool f=0,f1=0;
    int i = 0;
    while(i<s.size() && s[i] == 'A')
        i++;

    if(i == s.size() || i == 0)
        goto done;
    while(i<s.size() && s[i] == '!')
        i++;
    if(i == s.size())
        goto yay;
    done : ;
    cout << "No panic\n";
    return 0;
    yay : ;
    cout << "Panic!\n";
}
