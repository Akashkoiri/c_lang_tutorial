#include<stdio.h>
#include<conio.h>

void main()
{
    int a[5],sum=0;

    for(int i=0;i<5;i++)
    {
        printf("Enter a number in array: ");
        scanf("%d",&a[i]);
    }

    for(int i=0;i<5;i++)
    {
        printf("%d \n",a[i]);
        sum=sum+a[i];
    }
    printf("The sum is: %d",sum);
    
    getch();
}