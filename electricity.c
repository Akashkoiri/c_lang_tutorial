#include <stdio.h>
#include <conio.h>

void main()
{
    float u,b;
    printf("Enter your total unit: ");
    scanf("%f",&u);

    if(u<=100)
    {
        b = (u*5);
    }
    else if(u>=101 && u<=200)
    {
        b = (u*6.25);
    }
    else
    {
        b = (u*7);
    }
    printf("Your bill is %f",b+50);

    getch();
}
