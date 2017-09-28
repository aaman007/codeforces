#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cnt=0;
    char ch[129];
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> ch[i];
    }
    for(int i=0;i<t;i++)
    {
        if(ch[i]==ch[i+1])
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
