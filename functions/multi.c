#include <stdio.h>
#include <conio.h>

void main()
{
    int c;
    int n1, n2;
    int a, h;
    int multi(int, int);
    int hcf(int, int);

    printf("1. Multiplication\n2. H.C.F\nEnter your choice: ");
    scanf("%d", &c);

    printf("Enter your numbers: ");
    scanf("%d,%d", &n1, &n2);

    switch (c)
    {
    case 1:
        a = multi(n1, n2);
        printf("The multiplication is: %d", a);
        break;
    case 2:
        hcf(n1, n2);
        // printf("The division is: %d",h);
        break;
    default:
        printf("Wrong choice");
    }
    getch();
}

int multi(int x, int y)
{
    int a;
    a = x * y;
    return (a);
}
int hcf(int x, int y)
{
    int a;
    for (int i = 0; i < (x * y); i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            a = i;
        }
    }
    return (a);
}