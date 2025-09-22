#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("enter a and b\n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("value of a and b after swapping is:-%d 56 %d\n",a,b);
    return 0;
}