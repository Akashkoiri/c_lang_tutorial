#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b,c;
    printf("Enter value of a and b: ");
    scanf("%d,%d",&a,&b);
    c = a;
    a = b;
    b = c;
    printf("After swaping\n");
    printf("The value of A is: %d \n",a);
    printf("The value of B is: %d",b);
    getch();
}