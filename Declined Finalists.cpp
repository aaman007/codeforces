#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int r[k+1],cnt=0;
    for(int i=0;i<k;i++)
    {
        cin >> r[i];
        if(r[i]>25)
            cnt = max(cnt,r[i]-25);
        //else
            //cnt++;
    }
    cout << cnt << endl;
}
