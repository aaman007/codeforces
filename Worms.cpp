#include<bits/stdc++.h>
#define mx 1000002
using namespace std;
int label[mx];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,sum=1;
    cin >> n;
    int a;
    for(int i=1;i<=n;i++)
    {
        cin >> a;
        for(int j=sum;j<a+sum;j++)
            label[j] = i;
        sum += a;
    }
    int m;
    cin >> m;
    int q;
    for(int i=0;i<m;i++)
    {
        cin >> q;
        cout << label[q] << endl;
    }
}


