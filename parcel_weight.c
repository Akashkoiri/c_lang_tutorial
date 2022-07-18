#include<stdio.h>
#include<conio.h>

void main()
{
    float w,a;
    printf("Enter the parcels weight: ");
    scanf("%f",&w);
    
    if(w<=1)
    {
        w = (15); 
    }
    else
    {
        a = ((w-1)/0.5)*8.0;
        w = (15+a);
    }

    printf("You have to pay: %f",w);
    getch();
}