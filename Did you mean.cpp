#include<bits/stdc++.h>
using namespace std;
string A[3005];
int main()
{
    string s;
    int cnt = 0 , k = 0;
    cin >> s;
    int len = s.length() , x;
    for(int i=0;i<len;i++)
    {
       if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
       {
            cnt++;
       }
       A[k] += s[i];
       if(cnt>=2)
       {
           int m = 1 , x = 1 , j = 1;
           while(A[k].length()>j)
           {
               if(A[k][j]==A[k][j-1])
                   m++;
                else
                {
                   if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'
                      && s[i-1]!='a' && s[i-1]!='e' && s[i-1]!='i' && s[i-1]!='o' && s[i-1]!='u')
                    {
                        x++;
                        if(j==A[k].length()-1)
                            x++;
                    }
                }
                j++;
           }
           if(m<A[k].length() && x>=2)
           {
               A[k] += ' ';
               k++;
               cnt = 0;
           }
       }

    }
    int len2 = A[k].length();
    if(A[k][len2-1]==' ')
        A[k].erase(len2-1,1);
    for(int i=0;i<=k;i++)
        cout << A[i];
    cout << endl;
}
