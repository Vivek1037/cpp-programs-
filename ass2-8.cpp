#include<stdio.h>
int main()
{
    int a;
    printf("enter the number:-\n");
    scanf("%d",&a);
    if (a & 1)
    {
        printf("odd Number\n");
    }
    else
    {
        printf("even number \n");
    }
    
    return 0;
}