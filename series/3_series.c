#include<stdio.h>
#include<conio.h>

void main()
{
    int a=1,b=1,c;
    float s=0;

    printf("Enter a number: ");
    scanf("%d",&c);

    while((a*b)<c)
    {
        s = s+(1/(float)a*(float)b);
        a++;
        b++;
    }
    printf("Total is: %f",s);
    getch();
}