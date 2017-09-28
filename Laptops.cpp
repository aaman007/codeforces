#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin >> n;
    int flag = 0;
    while(n--)
    {
        cin >> a >> b;
        if(a<b)
            flag=1;
    }
    if(flag==1)
        cout << "Happy Alex" << endl;
    else
        cout << "Poor Alex" << endl;
    return 0;
}
