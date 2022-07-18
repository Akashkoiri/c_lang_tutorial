#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,m,h;

    printf("Enter two numbers: ");
    scanf("%d,%d",&a,&b);
    m=a*b;

    for(int i=1;i<m;i++)
    {
        if(a%i==0 && b%i==0)
        {
            h=i;
        }
    }
    printf("The HCF is: %d",h);
    getch();
}