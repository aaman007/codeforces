#include<bits/stdc++.h>
using namespace std;

#define ll          long long
#define pii         pair<int,int>
#define sf(a)       scanf("%d",&a)
#define pf(a)       printf("%d\n",a)
#define mem(a,b)    memset(a,b,sizeof(a))
#define all(x)      x.begin(),x.end()
#define rall(x)     x.rbegin(),x.rend()
#define pb          push_back
#define F           first
#define S           second
#define Check       cout<< "Done in " << clock() / CLOCKS_PER_SEC <<" sec"<< endl;
#define FastRead    ios_base::sync_with_stdio(false);cin.tie(NULL);
int cnt[105][105];
int main()
{
    int n,kk,mxR=-1,idxR=0,idxC=0;
    cin >> n >> kk;
    string s[n+2];
    for(int i=0; i<n; i++)
        cin >> s[i];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(s[i][j] != '.')
                continue;
            else if(kk == 1)
            {
                cnt[i][j] = 1;
                continue;
            }
            int k = j, c = 0;
            while(k<n && c<kk && s[i][k] == '.')
                c++, k++;
            if(c == kk)
                for(int l=j; l<k; l++)
                    cnt[i][l]++;

            k = i, c = 0;
            while(k<n && c<kk && s[k][j] == '.')
                c++, k++;
            if(c == kk)
                for(int l=i; l<k; l++)
                    cnt[l][j]++;

        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(cnt[i][j]>mxR)
            {
                mxR = cnt[i][j];
                idxR = i;
                idxC = j;
            }
        }
    }
    cout << idxR+1 << " " << idxC+1 << endl;
}
