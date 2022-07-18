#include <stdio.h>
#include <conio.h>

void main()
{
    char s1[0];
    char s2[0];


    printf("Enter your first name: ");
    gets(s1);
    printf("Enter your last name: ");
    gets(s2);

    puts(s1);
    puts(s2);


    getch();
}