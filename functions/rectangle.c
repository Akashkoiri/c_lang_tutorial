#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    float l, b, a, p, d;
    float area(float, float),
          peri(float, float),
          diag(float, float);

    printf("Enter lenght & bredth: ");
    scanf("%f,%f", &l, &b);

    //CALLING THE FUNCTIONS & DO THE JOB USING GIVEN PARAMETERS
    a = area(l, b);
    p = peri(l, b);
    d = diag(l, b);

    //PRINTING THE ANSWERS
    printf("The area is: %f", a);
    printf("\nThe perimeter is: %f", p);
    printf("\nThe diagonal is: %f", d);

    getch();
}

/*----------------FUNCTIONS-------------*/
float area(float x, float y)        //FUNCTION NO.1
{
    float a;
    a = 2 * (x + y);
    return (a);
}
float peri(float x, float y)        //FUNCTION NO.2
{
    float a;
    a = x * y;
    return (a);
}
float diag(float x, float y)        //FUNCTION NO.3
{
    float a;
    a = sqrt(pow(x, 2) + pow(y, 2));
    return (a);
}