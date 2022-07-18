#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    float p,r,t,ci;
    printf("Enter the principle amount: ");
    scanf("%f",&p);
    printf("Enter the Rate of interest: ");
    scanf("%f",&r);
    printf("Enter the time: ");
    scanf("%f",&t);
    ci = p*pow((1+(r/100)),t);
    printf("The Compound interest is: %f",ci);   
    getch();
}                   