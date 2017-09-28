#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = sqrt(n);
    int y = n-(x*x);
    int z = y/x;
    y -= z*x;
    int a = (y>0)? 2 : 0;
    //cout << y << endl;
    cout << (long long)(4*x+ (2*z) + a) << endl;
}
