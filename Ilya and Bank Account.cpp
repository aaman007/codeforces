#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,i=0,x,A[110];
    cin >> a;
    if(a>=0)
        cout << a << endl;
    else
    {
        x = a/10;
        b = (a/100)*10+a%10;
        cout << max(x,b) << endl;
    }
    return 0;
}
