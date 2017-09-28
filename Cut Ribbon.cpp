#include<bits/stdc++.h>
using namespace std;
int dp[4][4005],a[5],n;
int maxCut(int i,int amount,int cuts)
{
    if(i==3)
    {
        if(amount==0)
            return cuts;
        else
            return 0;
    }
    else if(dp[i][amount]!=-1 && i<2)
        return dp[i][amount];
    int p1 = 0 , p2 = 0;
    if(amount-a[i]>=0)
        p1 = maxCut(i,amount-a[i],cuts+1);
    p2 = maxCut(i+1,amount,cuts);

    return dp[i][amount] = max(p1,p2);
}
int main()
{
    int n,b,c,ans;
    cin >> n >> a[0] >> a[1] >> a[2];
    sort(a,a+3);
    memset(dp,-1,sizeof(dp));
    cout << maxCut(0,n,0) << endl;
}
