#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,first=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a&1)
            first++;
    }
    if(first)
        cout << "First\n";
    else
        cout << "Second\n";

}
