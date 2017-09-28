#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len1,len2,one=0,two=0;
    string str1,str2;
    cin >> str1 >> str2;
    len1 = str1.length();
    len2 = str2.length();
    while(str1[one]=='0' && one<len1)
        one++;
    while(str2[two]=='0' && two<len2)
        two++;
    if(len1-one>len2-two)
    {
        cout << ">" << endl;
        return 0;
    }
    else if(len1-one < len2-two)
    {
        cout << "<" << endl;
        return 0;
    }
    else
    {
        for(int j=two,k=one;j<len2;j++,k++)
        {
            if(str1[k]>str2[j])
            {
                cout << ">" << endl;
                return 0;
            }
            else if(str1[k]<str2[j])
            {
                cout << "<" << endl;
                return 0;
            }
        }
        cout << "=" << endl;
        return 0;
    }
    return 0;
}
