#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll d1,d2,d3;
    cin >> d1 >> d2 >> d3;
    cout << min(d1+d2+d3,min(2*d1+2*d2,min(2*d1+2*d3,2*d2+2*d3))) << endl;
    return 0;
}
