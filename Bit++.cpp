#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x=0;
    char str[10];
    cin >> t;
    getchar();
    while(t--)
    {
        gets(str);
        if(str[1]=='+')
        {
            x++;
        }
        else if(str[1]=='-')
        {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}
