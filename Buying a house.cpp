#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,a,check,fnl=105;
    cin >> n >> m >> k;
    for(int i=1;i<=n;i++)
    {
        cin >> a;
        if(a<=k && a!=0)
        {
            if(abs(m-i)<fnl)
                fnl = abs(m-i);
        }
    }
    cout << fnl*10 << endl;
    return 0;
}
