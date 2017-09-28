#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,sum=0,c1=0,c2=0,c3=0,c4=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a;
        if(a==1)
            c1++;
        else if(a==2)
            c2++;
        else if(a==3)
            c3++;
        else
            c4++;
    }
    sum += c4;
    sum += c2/2;
    c2 %= 2;
    if(c1>=c3)
    {
        sum += c3;
        c1 = c1-c3;
        sum += c1/4;
        c1 = c1%4;
        if(c1+c2*2<=4 && c1+c2*2>0)
            sum++;
        else if(c1==3 && c2==1)
            sum += 2;
    }
    else if(c1<c3)
    {
        sum += c1;
        c3 = c3-c1;
        sum += c3+c2;
    }
    cout << sum << endl;
    return 0;
}
