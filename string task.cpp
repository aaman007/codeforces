#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[110],i,length;
    gets(str);
    length = strlen(str);

    for(i=0;i<length;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y'|| str[i]=='A' || str[i]=='E' || str[i]=='I' ||str[i]=='O' || str[i]=='U' || str[i]=='Y')
        {
           continue;
        }
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
        cout << "." << str[i];
    }
    cout << endl;

    return 0;

}
