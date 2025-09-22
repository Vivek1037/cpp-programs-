#include<stdio.h>
int main()
{
   int a;
   printf("enter the number \n");
   scanf("%d",&a);
   if (a%10 ==0)
   {
   printf("0");
   }
   else
   {
    printf("%d",a%10);
   }
    return 0;
}