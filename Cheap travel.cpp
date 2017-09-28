#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    int sum1 = n*a;
    int sum2 = ((n/m)*b)+((n%m)*a);
    int sum3 = ((n/m)*b)+b;
    int res = min(sum1,sum2);
    res = min(res,sum3);
    cout << res << endl;
    return 0;
}
