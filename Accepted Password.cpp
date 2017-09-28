#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str2;
    cin >> str >> str2;
    int cnt=0,len = str.length();
    for(int i=0;i<len;i++)
    {
        if(str[i]==str2[i])
            cnt++;

    }
    if(cnt==len || cnt==len-1)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}
