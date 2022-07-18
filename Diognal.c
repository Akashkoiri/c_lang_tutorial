#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    float l,b,d;
    printf("Enter thye lenght: ");
    scanf("%f",&l);
    printf("Enter the breadth: ");
    scanf("%f",&b);
    d = sqrt((l*l) + (b*b));
    printf("The diagonal is: %f",d);
    getch();
}