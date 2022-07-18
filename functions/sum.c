#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,n1,n2;
    int sum(int,int);
    int sub(int,int);
    
    printf("Enter two numbers: ");
    scanf("%d,%d",&n1,&n2);

    a = sum(n1,n2);
    printf("The sum is: %d",a);
    b = sub(n1,n2);
    printf("\nThe sub is: %d",b);
    
    getch();
}

int sum(int x,int y)
{
    int a;
    a = x+y;
    return(a);
}
int sub(int x, int y)
{
    int a;
    a = x-y;
    return(a);
}