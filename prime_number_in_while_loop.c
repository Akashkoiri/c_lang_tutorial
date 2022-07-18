#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i=2,c=0;

    printf("Enter a number: ");
    scanf("%d",&n);

    while(i<n)
    {
        if(n%i==0)
        {
            c=1;
        }
        i++;
    }

    if(c==0)
    {
        printf("This is a prime number");        
    }
    else
    {
        printf("this is not a prime number");
    }

    getch();
}