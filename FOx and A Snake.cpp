#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x=1;
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            if(x%2==0)
            {
                cout << "#";
                x++;
                for(int j=0;j<m-1;j++)
                {
                    cout << ".";
                }
            }
            else if(x%2==1)
            {
                for(int j=0;j<m-1;j++)
                {
                    cout << ".";
                }
                cout << "#";
                x++;
            }
            cout << endl;
        }
        else
        {
            for(int k=0;k<m;k++)
            {
                cout << "#";
            }
            cout << endl;
        }
    }
    return 0;
}
