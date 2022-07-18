#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c,d;
    printf("Enter 1 for sum \nEnter 2 for sub \nEnter 3 for multiply \nEnter 4 for div \nEnter 5 for reminder \n");
    printf("\nEnter your choice: ");
    scanf("%d",&a);

    printf("Enter the two numbers: ");
    scanf("%d,%d",&b,&c);

    switch(a)
    {
        case 1:
        d = b+c;
        break;

        case 2:
        d = b-c;
        break;

        case 3:
        d = b*c;
        break;

        case 4:
        d = b/c;
        break;

        case 5:
        d = b%c;
        break;

        default:
        printf("Wrong choice");

    }
    printf("\nYour answer is: %d",d);
    getch();
}