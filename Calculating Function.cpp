#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    if(n%2==1)
        n = (-1)*(n+1);
    n = n/2;
    cout << n << endl;
    return 0;
}
