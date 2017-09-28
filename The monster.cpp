#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,A[110],B[110],flag = -1;
    cin >> a >> b >> c >> d;
    for(int i=0;i<=100;i++)
    {
        A[i] = b + (i*a);
        B[i] = d + (i*c);
    }
    for(int i=0;i<=100;i++)
    {
        for(int j=0;j<=100;j++)
        {
            if(A[i] == B[j])
            {
                cout << A[i] << endl;
                return 0;
            }
        }
    }
    cout << flag << endl;
    return 0;

}
