#include<stdio.h>
#include<conio.h>

void main()
{
    float s,t;
    printf("Enter your salary: ");
    scanf("%f",&s);

    if(s<=100000)
    {
        printf("You don't have to pay Tax");
    }
    else if(s>=100001 && s<=150000)
    {
        t = (s*10)/100;
        printf("You have to pay the income tax of %f",t);
    }
    else if(s>=150001 && s<=250000)
    {
        t = ((s*20)/100)+5000;
        printf("You have to pay the income tax of %f",t);
    }
    else
    {
        t = ((s*30)/100)+25000;
        printf("You have to pay the income tax of %f",t);
    }

    
    getch();
}