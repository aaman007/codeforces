#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int a1,a2,a3,b1,b2,b3;
    int cup,med,n;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
    cin >> n;
    cup = a1+a2+a3;
    med = b1+b2+b3;
    cup = ceil((float)cup/5);
    med = ceil((float)med/10);
    int x = cup+med;

    if(x<=n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}


