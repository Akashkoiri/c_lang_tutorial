#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,c=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c=1;
        }
    }

    if(c==0)
    {
        printf("This is a prime number");
    }
    else
    {
        printf("This is not a prime number");
    }

    getch();
}