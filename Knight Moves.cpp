#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
int fx[9] = {0,2,2,-2,-2,1,-1,1,-1};
int fy[9] = {0,1,-1,1,-1,2,2,-2,-2};
int vis[50][50],mov[50][50];
int BFS(int sx,int sy,int ex,int ey)
{
    int mn = 100;
    queue < pii > Q;
    Q.push(pii(sx,sy));
    vis[sx][sy] = 1;
    mov[sx][sy] = 0;
    while(!Q.empty())
    {
        pii top = Q.front();
        Q.pop();
        for(int i=1;i<=8;i++)
        {
            int tx = top.first+fx[i];
            int ty = top.second+fy[i];
            if(tx>=1 && tx<=8 && ty>=1 && ty<=8 && !vis[tx][ty])
            {
                vis[tx][ty] = 1;
                Q.push(pii(tx,ty));
                mov[tx][ty] = mov[top.first][top.second]+1;
            }
            //cout <<tx <<ex << ty << ey << endl;
            if(tx==ex && ty==ey && mov[tx][ty]<mn)
                mn = mov[tx][ty];
        }
    }
    return mn;
}
int main()
{
    string s,s1;
    while(cin >> s >> s1)
    {
        memset(vis,0,sizeof(vis));
        memset(mov,0,sizeof(mov));
        int sx = s[0]-'0'-'0';
        int sy = s[1]-'0';
        int ex = s1[0]-'0'-'0';
        int ey = s1[1]-'0';
        int ans = BFS(sx,sy,ex,ey);
        cout << "To get from "<<s <<" to "<<s1 <<" takes " << ans << " knight moves."<< endl;

    }
}
