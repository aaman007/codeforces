#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6][6],ai,aj;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin >> a[i][j];
            if(a[i][j]==1)
            {
                ai = i;
                aj = j;
            }
        }
    }
    cout << abs(ai-2)+abs(aj-2) << endl;
    return 0;
}
