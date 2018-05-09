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
    int n,a,b;
    string s;
    cin >> n >> a >> b;
    cin >> s;
    int start = -1,prev=0,cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '.')
        {
            if(start == -1)
            {
                if(a>b && a>0)
                    prev = 1 , a-- , cnt++;
                else if(b>0)
                    prev = 2 , b-- , cnt++;
                start = 0;
            }
            else if(prev == 1)
            {
                if(b>0)
                    b-- , cnt++ , prev = 2;
                else
                    prev = 2;
            }
            else if(prev == 2)
            {
                if(a>0)
                    a-- , cnt++ , prev = 1;
                else
                    prev = 1;
            }
        }
        else
            start = -1;
    }
    cout << cnt << endl;
}
