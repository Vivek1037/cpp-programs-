#include<stdio.h>
int main()
{
    int a,c,d=0;
    printf("enter the digit:-\n");
    scanf("%d",&a);
    printf("Enter the digit to ammend in the previuos number:-\n");
    scanf("%d",&c);
   d=(a*10)+c;
    printf("%d\n",d);
    return 0;
}