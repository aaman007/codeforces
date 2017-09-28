#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str,str2="";
    for(int i=1;i<=n;i++)
    {
        if(i%2 != 0)
            str2 += "I hate that ";
        else
            str2 += "I love that ";
    }
    int len = str2.length();
    str2.erase(len-5);
    str2 += "it";
    cout << str2 << endl;
    return 0;
}

