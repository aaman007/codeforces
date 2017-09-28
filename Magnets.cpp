#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    char str[10],c='\0';
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> str;
        if(str[0]!=c)
            cnt++;
        c = str[0];
    }
    cout << cnt << endl;
    return 0;
}
