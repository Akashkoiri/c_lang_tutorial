#include<stdio.h>
#include<conio.h>

void main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    switch(a)
    {
        case 1:
        printf("Good morning");
        break;

        case 2:
        printf("Good afternoon");
        break;

        case 3:
        printf("Good evening");
        break;

        case 4:
        printf("Good night");
        break;

        default:
        printf("Wrong choice");
    }


    getch();
}