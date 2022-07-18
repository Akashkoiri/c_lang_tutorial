#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,a[5],temp,min;

    for(i=0;i<5;i++)
    {                    
    printf("Enter a number: ");         
    scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++)
    {
        min=i;
        for(j=i+1;j<5;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    getch();
}