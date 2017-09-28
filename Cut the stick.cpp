#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[1100];
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> a[i];
    }
    bool cnt = true;
    while(cnt)
    {
        cnt=false;
        int A=0,mn=1000;
        for(int i=0;i<t;i++)
        {
            if(a[i]>0 && a[i]<mn)
                mn = a[i];
        }
        for(int i=0;i<t;i++)
        {
            if(a[i]!=0)
            {
                a[i] = a[i]-mn;
                A++;
                cnt=true;
            }
        }
        if(A)
            cout << A << endl;
    }
    return 0;
}
