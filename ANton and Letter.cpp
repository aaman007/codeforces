#include<bits/stdc++.h>
using namespace std;
int A[1100];
int main()
{
    string str;
    getline(cin,str);
    int cnt=0,len = str.length();
    for(int i=0;i<len;i++)
    {
        if(str[i]>='a' && str[i]<='z')
            A[str[i]] = 1;
    }
    for(int i='a';i<='z';i++)
    {
        cnt += A[i];
    }
    cout << cnt << endl;
    return 0;
}
