#include<bits/stdc++.h>
using namespace std;
int A[110];
int main()
{
    char str[110];
    int cnt = 0;
    gets(str);
    int length = strlen(str);

    for(int i=0; i<length; i++)
    {
        A[str[i]] = 1;
    }

    for(int i='a'; i<='z'; i++)
    {
        cnt += A[i];
    }

    if(cnt %2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }

    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
