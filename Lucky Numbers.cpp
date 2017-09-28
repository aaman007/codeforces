#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,flag;
    cin >> a;
    int A[110],n=a,i=0;
    while(n>0)
    {
        A[i]=n%10;
        n = n/10;
        i++;
    }
    for(int j=0;j<i;j++)
    {
        if(A[j]==4 || A[j]==7 || a%4==0 || a%7==0 || a%47==0)
        {
            flag = 1;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

