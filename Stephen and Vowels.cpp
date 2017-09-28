#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll len,cnt,j;
    string str;
    cin >> len;
    cin >> str;
    for(ll i=0;i<len;i++)
    {
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' &&str[i]!='y')
            cout << str[i];
        else
        {
            cnt = 1;
            while(str[i]==str[i+1] && i<len)
            {
                cnt++;
                i++;
            }
            if(cnt==2 && (str[i]=='e' || str[i]=='o'))
               cout << str[i] << str[i];
            else
                cout << str[i];
        }
    }
    cout << endl;
    return 0;
}

