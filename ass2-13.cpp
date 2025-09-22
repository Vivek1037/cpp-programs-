#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the three digit number:-\n");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    a=(b*100)+a;
    printf("%d\n",a);
    return 0;
}