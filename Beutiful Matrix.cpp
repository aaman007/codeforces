#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6][6],ai,aj;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin >> a[i][j];
            if(a[i][j]==1)
            {
            ai = i;
            aj = j;
            }
        }
    }
    cout << abs(ai-3)+abs(aj-3) << endl;

    return 0;
}
