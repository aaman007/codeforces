#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin >> t;
    int ar[t];
    for(i=0;i<t;i++)
    {
        cin >> ar[i];
    }
    for(i=0;i<t;i++)
    {
        if(ar[i]+ar[i+1] == 1 && ar[i+2]==0)
        {
            cout << "YES" << endl;
        }
        else if(ar[i]+ar[i+2] == 1 && ar[i+1]==0)
        {
            cout << "YES" << endl;
        }
        else if(ar[i+1]+ar[i+2] == 1 && ar[i]==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
