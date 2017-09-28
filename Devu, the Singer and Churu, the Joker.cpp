#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,temp=0;
    cin >> n >> x;
    int t;
    for(int i=0;i<n;i++)
    {
        cin >> t;
        x -= t;
        if(i<n-1)
            x -= 10 , temp += 10;
    }
    if(x<0)
        cout << -1 << endl;
    else
        cout << (x+temp)/5 << endl;
}
