#include<stdio.h>
#include<conio.h>

void main()
{
    float r,a,c;
    printf("The radius is: ");
    scanf("%f",&r);
    a=3.14*r*r;
    printf("The area is: %f \n",a);
    c=2*3.14*r;
    printf("The circumference is: %f",c);
    getch();
}