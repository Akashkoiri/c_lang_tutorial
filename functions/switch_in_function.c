#include <stdio.h>
#include <conio.h>

void main()
{
    int n1, n2, h, f, c;
    int fact(int);
    int hcf(int, int);

    printf("1. H.C.F\n2. Factors\nEnter your choice: ");
    scanf("%d", &c);

    printf("Enter your numbers: ");
    scanf("%d,%d", &n1, &n2);

    switch (c)
    {
    case 1:
        h = hcf(n1, n2);
        printf("The H.C.F is: %d", h);
        break;
    case 2:
        fact(n1);
        break;
    default:
        printf("Wrong choice.");
    }

    getch();
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
int fact(int x)
{
    for (int i = 0; i < x; i++)
    {
        if (x % i == 0)
        {
            printf("%d", i);
        }
    }
    getch();
}