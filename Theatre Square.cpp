#include<bits/stdc++.h>
#define pf printf
using namespace std;
int main()
{
    double n,m,a,sum;
    cin >> n >> m >> a;
    sum = ceil(n/a)*ceil(m/a);
    pf("%.0lf\n",sum);
    return 0;
}
