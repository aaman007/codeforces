#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w;
    int price;
    int cost=0;
    int frnd;

    cin>> k >> n >> w;

    for(int i=1; i<=w; i++)
    {
        price=i*k;
        cost=cost+price;
    }

    frnd=cost-n;
    if(frnd<0)
    {
        frnd=0;
    }
    cout << frnd << endl;

    return 0;
}
