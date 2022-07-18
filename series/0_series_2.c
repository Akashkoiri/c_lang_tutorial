#include<stdio.h>
#include<conio.h>

void main()
{
    int i=2;
    float s=1;

    printf("1");
    while(i<=10)
    {
        printf("+(1/%d)",i);
        s=s+(1/(float)i);
        i++;
    }
    printf("\nThe total is: %f",s);
    getch();
}