# include <stdio.h>
# include <conio.h>

void main()
{
    int l,b,a,p;
    printf("The lenght is: ");
    scanf("%d",&l);
    printf("The bredth is: ");
    scanf("%d",&b);
    a=2*(l+b);
    printf("The perimeter is: %d \n",a);
    p=l*b;
    printf("The area is: %d",p);
    getch();
}