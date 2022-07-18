#include<stdio.h>
#include<conio.h>

void main()
{
    int a[5],i,j,n,c=0;

    for(i=0;i<5;i++)
    {
        printf("Enter a num in array: ");
        scanf("%d",a[i]);
    }
    
    printf("Enter a searching num: ");
    scanf("%d",&n);

    for(i=0;i<3;i++)
    {
        if(n==a[i])
        {
            c=1;
        }
    }

    if(c==1)
    {
        printf("The num is presented in array");
    }
    else
    {
        printf("The num is not presented in array");
    }


    getch();
}