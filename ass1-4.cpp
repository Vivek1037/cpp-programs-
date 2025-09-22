#include<stdio.h>
#include<math.h>
int main()
{
    float r,A;
     
    printf("please enter the value of radius to calculate the area of the circle :-\n");
    scanf("%f",&r);
    A=3.14*r*r;
    printf("Area of the circle is equal to %f \n",A);
    return 0;
}
