#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,f,k,cnt=0,ff=0,i=1;
    cin >> a >> b >> f >> k;
    int x = b;
    if(b<f)
    {
        cout << -1 << endl;
        return 0;
    }
    while(k)
    {
        if(i%2)
        {
            b -= f;
            if(b<2*(a-f) && k>1)
                b = x , cnt++;
            else if(b<(a-f) && k==1)
                b = x , cnt++;
            //cout << b << endl;
            if(b<2*(a-f) && k>1)
            {
                cout << -1 << endl;
                return 0;
            }
            else if(b<(a-f) && k==1)
            {
                cout << -1 << endl;
                return 0;
            }
            b -= (a-f);
        }
        else
        {
            b -= (a-f);
            if(b<2*f && k>1)
                b = x , cnt++;
            else if(b<f && k==1)
                b = x , cnt++;
            //cout << b << endl;
            if(b<2*f && k>1)
            {
                cout << -1 << endl;
                return 0;
            }
            else if(b<f && k==1)
            {
                cout << -1 << endl;
                return 0;
            }
            b -= f;
        }
        k--;
        i++;
    }
    cout << cnt << endl;
}
