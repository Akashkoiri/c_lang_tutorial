#include <stdio.h>
#include <conio.h>

void main()
{
    int td,y,m,d;
    printf("Total number of days: ");
    scanf("%d",&td);
    y = (td/365);
    printf("year: %d \n",y);
    m = (td%365)/30;
    printf("Months: %d \n",m);
    d = ((td%365)%30);
    printf("Days: %d \n",d);
    getch();

}