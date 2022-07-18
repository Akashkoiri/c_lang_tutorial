#include<stdio.h>
#include<conio.h>

void main()
{
    int a=2,b=0,n;
    float s=0;

    printf("Enter a number: ");
    scanf("%d",&n);

    while(a<=n && b<=n)
    {   
        b=a+2;
        s=s+((float)a-(float)b);
        a=b+2;
    }
    printf("Total is: %f",s);

    getch();
}