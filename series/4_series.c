#include<stdio.h>
#include<conio.h>

void main()
{
    float s=0;

    for(int i=2;i<=10;i=i+2)
    {
        s=s+(1/(float)i);
    }
    printf("Toatal is: %f",s);

    getch();
}