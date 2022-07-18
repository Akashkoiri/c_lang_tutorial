#include<stdio.h>
#include<conio.h>
#include<string.h>


void main()
{
    char a[10];
    int l;
    
    printf("Enter your name: ");
    gets(a);
    puts(a);

    //finding lenght of array
    l=strlen(a);
    printf("%d \n",l);
    puts(a);


    getch();
}