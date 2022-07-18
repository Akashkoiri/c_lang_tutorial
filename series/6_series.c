#include<stdio.h>
#include<conio.h>

void main()
{
    int n,b;
    float s=0;

    printf("Enter range: ");
    scanf("%d",n);

    for(int a=1;a<=n;a++)
    {
        b=a+1;
        s=s+((float)a/(float)b);
    }
    printf("");

    getch();
}