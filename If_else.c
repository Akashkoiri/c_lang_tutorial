#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    getch(); 
}