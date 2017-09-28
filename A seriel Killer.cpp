#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str[1100],str2[1100];
    cin >> str[0] >> str2[0];
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> str[i] >> str2[i];
    }
    cout << str[0] << " " << str2[0] << endl;
    for(int i=1;i<=n;i++)
    {
        if(str[i]==str[0])
            str[0] = str2[i];
        else if(str[i]==str2[0])
            str2[0] = str2[i];
        cout << str[0] << " " << str2[0] << endl;
    }
    return 0;
}

