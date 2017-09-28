#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    gets(str);
    int i,flag=0,l = strlen(str);
    for(i=1; i<l; i++)
    {
        if(str[i] >='a' && str[i]<='z')
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)
    {
        printf("%s\n",str);
    }
    else
    {
        for(i=0; i<l; i++)
        {
            if(str[i]>='A' && str[i]<= 'Z')
            {
                str[i] = str[i]+32;
            }
            else
            {
                str[i] = str[i]-32;
            }
        }
        printf("%s\n",str);
    }
    return 0;
}
