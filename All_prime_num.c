#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,a=1;
    printf("Enter a number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        a=a*i;
    }
    printf("The Factorial is %d",a);
    getch();
}