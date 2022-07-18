# include <stdio.h>
# include <conio.h>

void main()
{
    int p,r,t,si;
    printf("Enter the principle amount: ");
    scanf("%d",&p);
    printf("Enter the rate of interest: ");
    scanf("%d",&r);
    printf("Enter the time: ");
    scanf("%d",&t);

    si = (p*r*t)/100;
    
    printf("\nThe simple interest: %d",si);
    getch();
}