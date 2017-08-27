#include<bits/stdc++.h>
#define ull unsigned long long int
using namespace std;
ull power(int x)
{
    ull ans = 1;
    for(int i=1;i<=x;i++)
        ans *= 2;
    return ans-1;

}
int main()
{
    int n,m;
    cin >>n >>m;
    int a[n+1][m+1];
    unsigned long long int ans = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin >> a[i][j];
    }
    for(int i=0;i<n;i++)
    {
        int zer = 0 , on = 0 , r = 2;
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==0)
                zer++;
            else
                on++;
        }
        ans += power(zer);
        ans += power(on);
    }
    for(int i=0;i<m;i++)
    {
        int zer = 0 , on = 0 ;
        for(int j=0;j<n;j++)
        {
            if(a[j][i]==0)
                zer++;
            else
                on++;
        }
        ans += power(zer);
        ans += power(on);

    }
    cout << ans-(n*m) << endl;
}
