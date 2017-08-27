#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a,empt=0,sum=0;
    cin >> n >> k;
    for(int i=0;i<k;i++)
    {
        cin >> a;
        if(a%2)
        {
            a++;
            empt++;
        }
        sum += a;
    }
    if(sum<n*8 || (sum==n*8 && (empt>=n || n*4>k)))
        cout << "YES\n";
    else
        cout << "NO\n";
}
