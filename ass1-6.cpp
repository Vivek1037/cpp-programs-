#include<stdio.h>
int main()
{
    char str[100];
    printf("please enter the name theat u wants to print inside the double quotes\n");
    scanf(" %[^\n]",str);
    printf("Nama that u entered is \" Jai maa sarswati 
        %s\"",str);
    return 0;
}