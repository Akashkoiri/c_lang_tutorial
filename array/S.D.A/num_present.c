#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,j,c=0;
    int a[5];

    for(i=0;i<5;i++)
    {
        printf("Enter a number: ");
        scanf("%d",&a[i]);
    }

    printf("Enter the searching number: ");
    scanf("%d",&n);

    for(j=0;j<5;j++)
    {
        if(n==a[j])
        {
            c=1;
        }
        
    }

    if(c==1)
    {
        printf("%d is presented",n);
    }
    else
    {
        printf("%d is not presented",n);
    }
    
    getch();
}