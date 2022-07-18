#include<stdio.h>
#include<conio.h>

void main()
{
    int a=0,c;

    for(int i=1;i<=20;i++)
    {
        if(i%2==0)
        {
            c=1;
        }
        else
        {
            printf("%d \n",i);
            a=a+1;
        }
        
    }
    printf("Total odd numbers are: %d",a);
    getch();
}