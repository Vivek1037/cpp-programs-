
#include<stdio.h>
int main()
{
    int a,b,c;
    char ch1,ch2;
    printf("please enter the value\n");
    scanf("%d%c%d%c%d",&a,&ch1,&b,&ch2,&c);
    printf("Day-%d,Month-%d,Year-%d",a,b,c);
    return 0;
}