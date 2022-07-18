#include<stdio.h>
#include<conio.h>

void main()
{
    int n,a,b=2;
    float s=0;
    printf("Enter the value of a & n: ");
    scanf("%d,%d",&a,&n);

    while(b<=n)
    {
        s = s+((float)a/(float)b);
        b = b*2;
    }
    
    printf("Total is: %f",s);
    getch();
}
