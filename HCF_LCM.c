#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,m,i=0,h;

    printf("Enter two numbers: ");
    scanf("%d,%d",&a,&b);
    m=a*b;

    while(i<m)
    {
        if(a%i==0 && b%i==0)
        {
            h=i;
        }
        i++;
    }
    printf("The HCF is: %d",h);
    getch();
}   