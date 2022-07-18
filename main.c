# include <stdio.h>
# include <conio.h>

void main()
{
    int a,b,c,d,e,f;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("sum is %d",c);
    printf("substraction is %d",d);
    printf("multiplication is %d",e);
    printf("division is %d",f);
    
    getch();
}
