#include<stdio.h>
#include<conio.h>

void main()
{
    float d,p;
    printf("Enter how many days you late: ");
    scanf("%f",&d);

    if(d<=5)
    {
        p = (d*0.40);
    }
    else if(d>=6 && d<=10)
    {
        p = (5*0.40)+(d-5)*0.65;
    }
    else
    {
        p = (5*0.40)+(5*0.65)+((d-10)*0.80);
    }
    printf("You have to pay %f",p);

    getch();
}