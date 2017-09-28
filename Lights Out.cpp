#include<bits/stdc++.h>
using namespace std;
int fx[5] = {-1,1,0,0};
int fy[5] = {0,0,-1,1};
int main()
{
    int a,x,y;
    string s[4];
    s[0] = "111";
    s[1] = "111";
    s[2] = "111";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >> a;
            a %= 2;
            if(a)
            {
                if(s[i][j]=='1')
                    s[i][j] = '0';
                else
                    s[i][j] = '1';

                for(int k=0;k<4;k++)
                {
                    x = i+fx[k];
                    y = j+fy[k];
                    if(x>=0 && x<3 && y>=0 && y<3)
                    {
                        if(s[x][y]=='1')
                            s[x][y] = '0';
                        else
                            s[x][y] = '1';
                    }
                }
                //for(int k=0;k<3;k++)
                    //cout << s[k] << endl;
            }
        }
    }
    for(int i=0;i<3;i++)
        cout << s[i] << endl;
}
