#include<stdio.h>
#include<cstring>
int main()
{
    char str[100];
    printf("Please enter name whose u wnats to calculate the length \n");
    scanf("%s",str);
    printf("length of the name that u enter is %d\n",strlen(str));
    return 0;
}