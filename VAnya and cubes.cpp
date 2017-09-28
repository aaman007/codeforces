#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,total=0,line=0;
    cin >> n;
    for(int i=1;;i++)
    {
        line += i;
        total += line;
        if(total>n)
            break;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}

