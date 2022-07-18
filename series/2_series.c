#include<stdio.h>
#include<conio.h>

void main()
{
    int a,n,b=1;
    float s=0;
    printf("Enter the value of a & n: ");
    scanf("%d,%d",&a,&n);

    while(b<=n)
    {
        s = s+( ((float)a+(float)b)/((float)b+1) );
        b++;
    }
    
    printf("Total is: %f",s);
    getch();
}
