#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int c = abs(a-b);

    if(a==0 && b==0)
        cout << "NO" << endl;
    else if(c<=1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}


