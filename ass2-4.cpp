#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the two number to swap\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value of a and b after swapping is:- %d And %d\n",a,b);
    return 0;
}