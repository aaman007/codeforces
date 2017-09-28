#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,chest=0,biceps=0,bck=0,mx;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a;
        if(i%3==1)
            chest += a;
        else if(i%3==2)
            biceps += a;
        else
            bck += a;
    }
    mx = max(chest,biceps);
    mx = max(mx,bck);
    if(mx==chest)
        cout << "chest" << endl;
    else if(mx==biceps)
        cout << "biceps" << endl;
    else
        cout << "back" << endl;
    return 0;
}
