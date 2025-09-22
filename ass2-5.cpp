#include<stdio.h>
int main()
{
    int a,c=0;
    printf("enter the three digits numbers:-\n");
    scanf("%d",&a);
    c+=a%10;
    a=a/10;
    c+=a%10;
    a=a/10;
    c+=a%10;
    a=a/10;
    printf("%d\n",c);
    return 0;
}