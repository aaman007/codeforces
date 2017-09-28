#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[700][700],mx=1;
    map < int,int > A;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin >> a[i][j];
            if(a[i][j]==1)
                A[i]++;
            else if(a[i][j]==2)
                A[j]++;
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(A[i]>A[mx])
            mx = i;
        else if(A[mx]>=A[i])
            continue;
    }
    cout << mx << endl;
    return 0;
}
