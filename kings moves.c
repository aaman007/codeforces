#include<stdio.h>
int main()
{
    int i,n;
    char c;
    scanf("%c%d",&c,&n);
    if((c=='a' && n==1) || (c=='a' && n==8) || (c=='h'&&n==1) || (c=='h'&&n==8))
        printf("3");
    else if(c=='a'||  c=='h' || n==8 || n== 1)
        printf("5");
    else
        printf("8");
        return 0;
}
