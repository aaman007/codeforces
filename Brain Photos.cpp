#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    bool flag = false;
    char ch;
    cin >> m >> n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> ch;
            if(ch=='C' || ch=='M' || ch=='Y')
                flag = true;
        }
    }

    if(flag)
        cout << "#Color" << endl;
    else
        cout << "#Black&White" << endl;
    return 0;
}
