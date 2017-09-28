#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int len = str.length();
    if(len<5)
    {
        cout << "NO" << endl;
        return 0;
    }
    for(int i=0;i<len;i++)
    {
        if(str[i]=='h')
        {
            for(int j=i+1;j<len;j++)
            {
                if(str[j]=='e')
                {
                    for(int k=j+1;k<len;k++)
                    {
                        if(str[k]=='l')
                        {
                            for(int l=k+1;l<len;l++)
                            {
                                if(str[l]=='l')
                                {
                                    for(int m=l+1;m<len;m++)
                                    {
                                        if(str[m]=='o')
                                        {
                                            cout << "YES" << endl;
                                            return 0;
                                        }
                                        else if(m==len-1)
                                            break;
                                    }
                                }
                                else if(l==len-1)
                                    break;
                            }
                        }
                        else if(k==len-1)
                            break;
                    }
                }
                else if(j==len-1)
                    break;
            }
        }
        else if(i==len-1)
            break;
    }
    cout << "NO" << endl;

    return 0;
}
