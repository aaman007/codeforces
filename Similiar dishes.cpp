#include<bits/stdc++.h>
using namespace std;
string s,s2;
int cnt;
int main()
{
    int t;
    cin >> t;
    vector < string > str,str2;

    for(int k=0;k<t;k++)
    {
        for(int i=0;i<4;i++)
        {
            cin >> s;
            str.push_back(s);
        }
        for(int i=0;i<4;i++)
        {
            cin >> s2;
            str2.push_back(s2);
        }

        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                if(str[i]==str2[j])
                {
                    cnt++;
                    break;
                }
            }
            if(cnt==2)
                break;
        }

        if(cnt==2)
        {
            cout << "similar" << endl;
            cnt = 0;
        }
        else if(cnt<2)
        {
            cout << "dissimilar" << endl;
            cnt = 0;
        }

        str.clear();
        str2.clear();
    }
    return 0;
}
