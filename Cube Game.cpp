#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,player = 1,i=0,mx=0,a[150];
    cin >> t;
    int t2=t;
    while(t--)
    {
        int b,s,g,r;
        cin >> b >> s >> g >> r;
        b *= 1;
        s *= 3;
        g *= 10;
        r *= 5;
        a[i] = (b+s+g)-r;
        if(a[i]<0)
            cout << 0 << endl;
        else
            cout << "Player " << player << ": " << a[i] << endl;
        player++;
        i++;
    }
    for(i=0;i<t2;i++)
    {
        if(a[i]>mx)
        {
            mx = a[i];
        }
    }
    cout << "Highest Score = " << mx << endl;
    return 0;
}
