#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b=1,n=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(b=1;b<a;b++)
    {
        if(a%b==0)
        {
            printf("%d \n",b);
            n=n+1;
        }
        
    }
    printf("Total factors of %d is %d",a,n);
    getch();
}