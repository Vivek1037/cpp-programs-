#include<stdio.h>
int main()
{
    int a,b;
    char ch1;
    printf("please enter the time in hour and minute \n");
    scanf("%d%c%d",&a,&ch1,&b);
    printf("Time is %d  hour and %d minute",a,b);
    return 0;
}