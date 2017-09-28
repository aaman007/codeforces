#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    n %= 6;
    int x;
    cin >> x;
    int A[10];
    A[0]=0,A[1]=1,A[2]=2;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
           swap(A[1],A[2]);
        }
        else
           swap(A[0],A[1]);
    }
    cout << A[x] << endl;
    return 0;
}
