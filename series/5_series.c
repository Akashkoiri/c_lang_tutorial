#include<stdio.h>
#include<conio.h>

void main()
{
    int a;
    float s=0;

    for(int i=2;i<=10;i=i+2)
    {
        s=s+((float)a/(float)i);
    }
    printf("Toatal is: %f",s);

    getch();
}