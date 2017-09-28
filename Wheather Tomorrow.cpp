#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n+1],x[n+1];
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=1;i<n;i++)
    {
        x[i] = a[i]-a[i-1];
    }
    for(int i=2;i<n;i++)
    {
        if(abs(x[i])!=abs(x[i-1]))
        {
            cout << a[n-1] << endl;
            return 0;
        }
    }
    cout << a[n-1]+x[1] << endl;
}
