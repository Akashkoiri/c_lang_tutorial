#include<stdio.h>
#include<conio.h>

void main()
{
    int a[5],i,max=0,min=a[0];

    for(i=0;i<5;i++)
    {
        printf("Enter a number in array: ");
        scanf("%d",&a[i]);
        if(max<a[i])                 //maximum
        {
            max=a[i];
        }

        if(a[i]<min)                 //minimum
        {
            min=a[i];
        }
    }
    printf("The max num is: %d",max);

    printf("\nThe min num is: %d",min);
    
    getch();
}