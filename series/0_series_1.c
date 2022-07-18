#include<stdio.h>
#include<conio.h>

// n = 
void main()
{
    float s=0;

    for(int i=1;i<=3;i++)
    {
        s=s+(1/(float)i);
    }
    printf("The total is: %f",s);

    getch();
}