#include<stdio.h>
#include<conio.h>

void main()
{
    int n=20,i=2;
    float s=0;
    
    while(i<=n)
    {
        if(i%2==0)
        {
            s=s+(1/i);
        }
        else
        {
            s=s-(1/i);
        }
        i++;
    }
    
    printf("Total is: %f",s);
    getch();
}