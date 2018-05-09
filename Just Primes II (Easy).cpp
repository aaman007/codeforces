#include<bits/stdc++.h>
using namespace std;
int dp[17][55], coin[17] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47}, N = 15;
int mn;
int coinChange(int i,int amount,int cnt)
{
    if(i==N || coin[i]>amount)
    {
        if(amount==0)
        {
            mn = min(mn,cnt);
            return 1;
        }
        else
            return 0;
    }
    int p1 = 0, p2 = 0;
    if(amount-coin[i]>=0)
        p1 = coinChange(i+1,amount-coin[i],cnt+1);
    p2 = coinChange(i+1,amount,cnt);
    return p1+p2;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int Money;
        memset(dp,-1,sizeof(dp));
        mn = 1e9;
        cin >> Money;
        int ans =  coinChange(0,Money,0);
        if(ans == 0)
            mn = -1;
        cout << mn << endl;
    }
}
