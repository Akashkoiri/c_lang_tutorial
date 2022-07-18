#include<stdio.h>
#include<conio.h>

void main()
{
    int a=0;

    for(int i=1;i<=20;i++)
    {
        if(i%2==0)
        {
            printf("%d \n",i);
            a=a+1;
        }
    }
    printf("Total prime numbers are: %d",a);
    getch();
}