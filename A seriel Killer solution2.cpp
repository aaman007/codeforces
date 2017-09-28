#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str2,str3,str4;
    cin >> str >> str2;
    int n;
    cin >> n;
    cout << str << " " << str2 << endl;

    for(int i=1;i<=n;i++)
    {
        cin >> str3 >> str4;
        if(str3==str)
            str = str4;
        else if(str3==str2)
            str2 = str4;
        cout << str << " " << str2 << endl;
    }
    return 0;
}


