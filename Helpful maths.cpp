#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[110];
    int A[220];
    gets(str);
    int len = strlen(str);
    int j=0;
    for(int i=0;i<len;i++)
    {
        if(str[i] != '+')
        {
            A[j] = str[i]-48;
            j++;
        }
    }
    sort(A,A+j);

    for(int i=0;i<j;i++)
    {
        cout << A[i];
        if(i != j-1)
        {
            cout << "+";
        }
    }
    cout << endl;
    return 0;
}

