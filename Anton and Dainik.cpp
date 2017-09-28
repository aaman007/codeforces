#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,cnt1=0,cnt2=0;
    char str;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> str;
        if(str=='A')
            cnt1++;
        else
            cnt2++;
    }
    if(cnt1>cnt2)
        cout << "Anton\n";
    else if(cnt1==cnt2)
        cout << "Friendship\n";
    else
        cout << "Danik\n";
    return 0;
}
